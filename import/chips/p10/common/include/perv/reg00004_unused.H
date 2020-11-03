/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/perv/reg00004_unused.H $      */
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

#ifndef __PERV_REG00004_H_UNUSED__
#define __PERV_REG00004_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
{
#endif


//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT]


//>> SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL,
           CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL,
           CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL,
           CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL,
           CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL,
           CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL,
           CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]

//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY]


//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE,
           CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE,
           CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE,
           CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_LOW_PASS_DLY_LOW_PASS_DELAY_VALUE]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SOFT_RESET]


//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]

//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1,
           CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1,
           CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1,
           CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_1]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2,
           CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2,
           CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2,
           CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_MEASURE_HISTORY_2]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SOFT_RESET]


//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW]


//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12]

//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_12_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_12_MDA_M1A_DATA_AREA_12]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW]


//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5]

//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_5_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_5_MDA_M1A_DATA_AREA_5]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW]


//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9]

//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_9_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_9_MDA_M2A_DATA_AREA_9]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO]


//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_3_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_3_MDA_M2B_DATA_AREA_3]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_2_B_M1HC2B_MAILBOX_1_HEADER_COMMAND_2_B]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_A_M2HC2A_MAILBOX_2_HEADER_COMMAND_A]

//>> PREP_[L3TRA0_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR1_CONFIG_5]

//>> GET_[L3TRA0_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_CONFIG_5;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR1_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_5]

//>> PUT_[L3TRA0_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_5));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR1_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR1_CONFIG_5]


//>> SET_[L3TRA0_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_5_C,
           L3TRA0_TR1_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_5_C]

//>> SET_[L3TRA0_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_5_C,
           L3TRA0_TR1_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_5_C]

//>> GET_[L3TRA0_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_5));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_5_C,
           L3TRA0_TR1_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_5_C]

//>> SET_[L3TRA0_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_5_D,
           L3TRA0_TR1_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_5_D]

//>> SET_[L3TRA0_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_5_D,
           L3TRA0_TR1_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_5_D]

//>> GET_[L3TRA0_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG_5));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_5_D,
           L3TRA0_TR1_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_5_D]

//>> PREP_[L3TRA0_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR1_TRACE_HI_DATA_REG]

//>> GET_[L3TRA0_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR1_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_HI_DATA_REG]

//>> PUT_[L3TRA0_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR1_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR1_TRACE_HI_DATA_REG]


//>> SET_[L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[L3TRA1_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR0_CONFIG_3]

//>> GET_[L3TRA1_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_3]

//>> PUT_[L3TRA1_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR0_CONFIG_3]


//>> SET_[L3TRA1_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_3_C,
           L3TRA1_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_3_C]

//>> SET_[L3TRA1_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_3_C,
           L3TRA1_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_3_C]

//>> GET_[L3TRA1_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_3_C,
           L3TRA1_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_3_C]

//>> SET_[L3TRA1_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_3_D,
           L3TRA1_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_3_D]

//>> SET_[L3TRA1_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_3_D,
           L3TRA1_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_3_D]

//>> GET_[L3TRA1_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_3_D,
           L3TRA1_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_3_D]

//>> PREP_[L3TRA2_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR0_CONFIG_4]

//>> GET_[L3TRA2_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_CONFIG_4;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR0_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_4]

//>> PUT_[L3TRA2_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_4));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR0_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR0_CONFIG_4]


//>> SET_[L3TRA2_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_4_A,
           L3TRA2_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_4_A]

//>> SET_[L3TRA2_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_4_A,
           L3TRA2_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_4_A]

//>> GET_[L3TRA2_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_4_A,
           L3TRA2_TR0_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_4_A]

//>> SET_[L3TRA2_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_4_B,
           L3TRA2_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_4_B]

//>> SET_[L3TRA2_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_4_B,
           L3TRA2_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_4_B]

//>> GET_[L3TRA2_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_4_B,
           L3TRA2_TR0_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_4_B]

//>> PREP_[L3TRA3_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_TRACE_LO_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR0_TRACE_LO_DATA_REG]

//>> GET_[L3TRA3_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_TRACE_LO_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR0_TRACE_LO_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_LO_DATA_REG]

//>> PUT_[L3TRA3_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR0_TRACE_LO_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR0_TRACE_LO_DATA_REG]


//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> CLEAR_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline bool GET_L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> CLEAR_[L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline bool GET_L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> CLEAR_[L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline bool GET_L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> PREP_[L3TRA3_TR1_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR1_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR1_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR1_CONFIG_2]

//>> GET_[L3TRA3_TR1_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR1_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR1_CONFIG_2;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR1_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_2]

//>> PUT_[L3TRA3_TR1_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR1_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_2));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR1_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR1_CONFIG_2]


//>> SET_[L3TRA3_TR1_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_2_A,
           L3TRA3_TR1_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_2_A]

//>> SET_[L3TRA3_TR1_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_2_A,
           L3TRA3_TR1_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_2_A]

//>> GET_[L3TRA3_TR1_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_2));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_2_A,
           L3TRA3_TR1_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_2_A]

//>> SET_[L3TRA3_TR1_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_2_B,
           L3TRA3_TR1_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_2_B]

//>> SET_[L3TRA3_TR1_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_2_B,
           L3TRA3_TR1_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_2_B]

//>> GET_[L3TRA3_TR1_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_2));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_2_B,
           L3TRA3_TR1_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_2_B]

//>> PREP_[OTPC_M_MEASURE_REG5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_MEASURE_REG5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_MEASURE_REG5]

//>> GET_[OTPC_M_MEASURE_REG5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_MEASURE_REG5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG5;
#endif
    return fapi2::getScom(i_target, OTPC_M_MEASURE_REG5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG5]

//>> PUT_[OTPC_M_MEASURE_REG5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_MEASURE_REG5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG5));
#endif
    return fapi2::putScom(i_target, OTPC_M_MEASURE_REG5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_MEASURE_REG5]


//>> SET_[OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG5));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA,
           OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA]

//>> SET_[OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG5));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA,
           OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA]

//>> GET_[OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG5));
#endif
    return i_data.extractToRight<OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA,
           OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG5_SEEPROM_MEASUREMENT5_DATA]

//>> PREP_[QMETRA0_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR0_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR0_CONFIG_5]

//>> GET_[QMETRA0_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR0_CONFIG_5;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR0_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_5]

//>> PUT_[QMETRA0_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_5));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR0_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR0_CONFIG_5]


//>> SET_[QMETRA0_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_5_C,
           QMETRA0_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_5_C]

//>> SET_[QMETRA0_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_5_C,
           QMETRA0_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_5_C]

//>> GET_[QMETRA0_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_5_C,
           QMETRA0_TR0_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_5_C]

//>> SET_[QMETRA0_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_5_D,
           QMETRA0_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_5_D]

//>> SET_[QMETRA0_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_5_D,
           QMETRA0_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_5_D]

//>> GET_[QMETRA0_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_5_D,
           QMETRA0_TR0_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_5_D]

//>> PREP_[REC_ERR_MST1_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST1_REG1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST1_REG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST1_REG1]

//>> GET_[REC_ERR_MST1_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST1_REG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST1_REG1;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST1_REG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST1_REG1]

//>> PUT_[REC_ERR_MST1_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST1_REG1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST1_REG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST1_REG1]


//>> SET_[REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_16_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_16_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_16_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_16_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_16_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_16_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_16_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_16_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_16_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_16_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_16_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_16_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_16_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_16_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_16_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_16_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_16_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_16_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_16_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_17_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_17_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_17_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_17_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_17_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_17_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_17_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_17_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_17_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_17_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_17_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_17_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_17_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_17_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_17_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_17_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_17_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_17_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_17_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_18_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_18_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_18_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_18_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_18_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_18_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_18_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_18_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_18_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_18_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_18_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_18_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_18_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_18_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_18_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_18_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_18_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_18_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_18_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_19_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_19_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_19_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_19_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_19_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_19_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_19_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_19_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_19_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_19_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_19_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_19_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_19_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_19_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_19_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_19_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_19_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_19_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_19_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_20_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_20_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_20_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_20_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_20_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_20_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_20_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_20_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_20_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_20_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_20_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_20_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_20_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_20_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_20_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_20_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_20_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_20_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_20_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_21_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_21_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_21_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_21_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_21_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_21_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_21_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_21_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_21_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_21_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_21_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_21_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_21_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_21_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_21_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_21_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_21_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_21_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_21_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_22_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_22_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_22_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_22_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_22_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_22_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_22_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_22_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_22_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_22_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_22_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_22_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_22_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_22_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_22_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_22_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_22_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_22_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_22_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_23_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_23_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_23_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_23_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_23_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_23_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_23_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_23_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_23_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_23_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_23_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_23_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_23_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_23_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_23_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_23_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_23_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_23_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_23_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_24_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_24_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_24_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_24_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_24_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_24_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_24_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_24_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_24_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_24_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_24_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_24_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_24_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_24_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_24_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_24_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_24_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_24_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_24_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_25_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_25_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_25_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_25_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_25_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_25_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_25_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_25_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_25_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_25_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_25_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_25_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_25_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_25_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_25_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_25_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_25_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_25_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_25_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_26_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_26_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_26_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_26_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_26_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_26_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_26_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_26_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_26_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_26_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_26_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_26_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_26_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_26_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_26_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_26_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_26_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_26_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_26_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_27_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_27_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_27_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_27_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_27_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_27_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_27_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_27_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_27_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_27_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_27_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_27_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_27_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_27_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_27_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_27_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_27_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_27_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_27_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_28_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_28_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_28_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_28_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_28_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_28_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_28_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_28_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_28_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_28_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_28_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_28_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_28_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_28_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_28_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_28_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_28_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_28_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_28_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_29_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_29_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_29_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_29_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_29_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_29_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_29_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_29_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_29_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_29_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_29_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_29_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_29_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_29_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_29_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_29_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_29_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_29_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_29_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_30_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_30_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_30_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_30_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_30_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_30_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_30_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_30_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_30_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_30_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_30_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_30_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_30_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_30_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_30_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_30_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_30_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_30_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_30_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.setBit<REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT]

//>> GET_[REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.getBit<REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_31_MST1_RESPONSE_BIT]

//>> SET_[REC_ERR_MST1_REG1_31_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_31_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_31_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_31_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST1_REG1_31_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_31_MST1_ERROR_CODE]

//>> SET_[REC_ERR_MST1_REG1_31_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST1_REG1_31_MST1_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST1_REG1_31_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_31_MST1_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST1_REG1_31_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST1_REG1_31_MST1_ERROR_CODE]

//>> GET_[REC_ERR_MST1_REG1_31_MST1_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST1_REG1_31_MST1_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST1_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST1_REG1_31_MST1_ERROR_CODE,
           REC_ERR_MST1_REG1_31_MST1_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST1_REG1_31_MST1_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST1_REG1_31_MST1_ERROR_CODE]

//>> PREP_[REC_ERR_MST5_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST5_REG0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST5_REG0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST5_REG0]

//>> GET_[REC_ERR_MST5_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST5_REG0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST5_REG0;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST5_REG0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST5_REG0]

//>> PUT_[REC_ERR_MST5_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST5_REG0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST5_REG0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST5_REG0]


//>> SET_[REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_MASTER_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_MASTER_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE1_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE1_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE2_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE2_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE3_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE3_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE4_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE4_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE5_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE5_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE6_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE6_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE7_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE7_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE8_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE8_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE9_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE9_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE10_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE10_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE11_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE11_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE12_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE12_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE13_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE13_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE14_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE14_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.setBit<REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT]

//>> GET_[REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.getBit<REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE15_MST5_RESPONSE_BIT]

//>> SET_[REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE]

//>> SET_[REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE]

//>> GET_[REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST5_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE,
           REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST5_REG0_SLAVE15_MST5_ERROR_CODE]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG107]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG107(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG107;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG107]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG107]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG107(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG107;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG107, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG107]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG107]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG107(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG107));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG107, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG107]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG107));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107,
           SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG107));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107,
           SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG107));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107,
           SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG107_REGISTER107]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG118]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG118(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG118;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG118]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG118]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG118(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG118;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG118, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG118]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG118]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG118(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG118));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG118, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG118]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG118));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118,
           SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG118));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118,
           SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG118));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118,
           SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG118_REGISTER118]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG16]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG16(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG16;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG16]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG16]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG16(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG16;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG16, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG16]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG16]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG16(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG16));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG16, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG16]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG16));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16,
           SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG16));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16,
           SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG16));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16,
           SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG16_REGISTER16]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG21]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG21(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG21;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG21]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG21]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG21(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG21;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG21, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG21]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG21]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG21(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG21));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG21, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG21]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG21));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21,
           SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG21));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21,
           SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG21));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21,
           SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG21_REGISTER21]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG40]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG40(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG40;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG40]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG40]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG40(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG40;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG40, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG40]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG40]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG40(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG40));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG40, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG40]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG40));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40,
           SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG40));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40,
           SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG40));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40,
           SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG40_REGISTER40]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG6(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG6;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG6]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG6(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG6;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG6, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG6]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG6(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG6));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG6, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG6]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG6));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6,
           SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG6));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6,
           SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG6));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6,
           SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG6_REGISTER6]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG68]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG68(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG68;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG68]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG68]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG68(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG68;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG68, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG68]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG68]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG68(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG68));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG68, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG68]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG68));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68,
           SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG68));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68,
           SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG68));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68,
           SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG68_REGISTER68]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG77]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG77(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG77;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG77]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG77]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG77(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG77;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG77, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG77]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG77]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG77(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG77));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG77, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG77]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG77));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77,
           SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG77));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77,
           SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG77));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77,
           SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG77_REGISTER77]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG82]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG82(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG82;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG82]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG82]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG82(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG82;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG82, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG82]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG82]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG82(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG82));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG82, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG82]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG82));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82,
           SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG82));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82,
           SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG82));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82,
           SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG82_REGISTER82]

//>> PREP_[TRA0_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR1_CONFIG_5]

//>> GET_[TRA0_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_5;
#endif
    return fapi2::getScom(i_target, TRA0_TR1_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_5]

//>> PUT_[TRA0_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return fapi2::putScom(i_target, TRA0_TR1_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR1_CONFIG_5]


//>> SET_[TRA0_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_5_C,
           TRA0_TR1_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access TRA0_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_5_C]

//>> SET_[TRA0_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_5_C,
           TRA0_TR1_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access TRA0_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_5_C]

//>> GET_[TRA0_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_5_C,
           TRA0_TR1_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access TRA0_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_5_C]

//>> SET_[TRA0_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_5_D,
           TRA0_TR1_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access TRA0_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_5_D]

//>> SET_[TRA0_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_5_D,
           TRA0_TR1_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access TRA0_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_5_D]

//>> GET_[TRA0_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_5));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_5_D,
           TRA0_TR1_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access TRA0_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_5_D]

//>> PREP_[TRA1_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_CONFIG_3]

//>> GET_[TRA1_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_3]

//>> PUT_[TRA1_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_CONFIG_3]


//>> SET_[TRA1_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_3_C,
           TRA1_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access TRA1_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_3_C]

//>> SET_[TRA1_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_3_C,
           TRA1_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access TRA1_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_3_C]

//>> GET_[TRA1_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_3_C,
           TRA1_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access TRA1_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_3_C]

//>> SET_[TRA1_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_3_D,
           TRA1_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access TRA1_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_3_D]

//>> SET_[TRA1_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_3_D,
           TRA1_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access TRA1_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_3_D]

//>> GET_[TRA1_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_3_D,
           TRA1_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access TRA1_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_3_D]

//>> PREP_[TRA2_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA2_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA2_TR0_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA2_TR0_CONFIG_4]

//>> GET_[TRA2_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA2_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA2_TR0_CONFIG_4;
#endif
    return fapi2::getScom(i_target, TRA2_TR0_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA2_TR0_CONFIG_4]

//>> PUT_[TRA2_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA2_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA2_TR0_CONFIG_4));
#endif
    return fapi2::putScom(i_target, TRA2_TR0_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA2_TR0_CONFIG_4]


//>> SET_[TRA2_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_TRA2_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA2_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA2_TR0_CONFIG_4_A,
           TRA2_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access TRA2_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA2_TR0_CONFIG_4_A]

//>> SET_[TRA2_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_TRA2_TR0_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA2_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA2_TR0_CONFIG_4_A,
           TRA2_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access TRA2_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA2_TR0_CONFIG_4_A]

//>> GET_[TRA2_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_TRA2_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA2_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<TRA2_TR0_CONFIG_4_A,
           TRA2_TR0_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access TRA2_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA2_TR0_CONFIG_4_A]

//>> SET_[TRA2_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_TRA2_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA2_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA2_TR0_CONFIG_4_B,
           TRA2_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access TRA2_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA2_TR0_CONFIG_4_B]

//>> SET_[TRA2_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_TRA2_TR0_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA2_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA2_TR0_CONFIG_4_B,
           TRA2_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access TRA2_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA2_TR0_CONFIG_4_B]

//>> GET_[TRA2_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_TRA2_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA2_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<TRA2_TR0_CONFIG_4_B,
           TRA2_TR0_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access TRA2_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA2_TR0_CONFIG_4_B]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
