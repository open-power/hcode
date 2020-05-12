/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/perv/reg00030_unused.H $      */
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

#ifndef __PERV_REG00030_H_UNUSED__
#define __PERV_REG00030_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
{
#endif


//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET]


//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE,
           CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE,
           CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE,
           CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]

//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_SET_DEC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_DEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_SET_DEC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_DEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_DEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_SET_DEC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_DEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC]


//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE,
           CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE,
           CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DEC));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE,
           CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DEC_DCC_VALUE]

//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE]


//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_ET_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT,
           CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT,
           CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT,
           CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_SINGLE_STEP_MODE_TEP_COUNT]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_STATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_0]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_1]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_2]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_INC_DEC_FSM_STATES_FMS_HIST_3]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_INIT_MODE]


//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1,
           CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1,
           CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1,
           CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_MEASURE_HIST_VAL1]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q,
           CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q,
           CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q,
           CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_INTERVAL_Q]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT,
           CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT,
           CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT,
           CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_DCADJ_DCS_SEL_INT]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_AVERAGE_MEASUREMENT_TARGET_VALUE]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_DCC_OVERRIDE_VALUE]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]


//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO]


//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO]


//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW]


//>> SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16]

//>> SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_16_SR_SCRATCH_REGISTER_16]

//>> PREP_[QMETRA0_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR1_CONFIG_1]

//>> GET_[QMETRA0_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_CONFIG_1;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR1_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_1]

//>> PUT_[QMETRA0_TR1_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR1_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_1));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR1_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR1_CONFIG_1]


//>> SET_[QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_1));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_1));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK2;
#endif
    return fapi2::getScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]

//>> PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return fapi2::putScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2]


//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP010]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP011]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP012]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP013]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP014]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK2));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK2_UNIT_TC_FIR_LOCAL_XSTOP015]

//>> PREP_[EPS_THERM_WSUB2_DTS_RESULT2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB2_DTS_RESULT2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB2_DTS_RESULT2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB2_DTS_RESULT2]

//>> GET_[EPS_THERM_WSUB2_DTS_RESULT2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB2_DTS_RESULT2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB2_DTS_RESULT2;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB2_DTS_RESULT2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB2_DTS_RESULT2]

//>> PUT_[EPS_THERM_WSUB2_DTS_RESULT2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB2_DTS_RESULT2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_DTS_RESULT2));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB2_DTS_RESULT2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB2_DTS_RESULT2]


//>> SET_[EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_DTS_RESULT2));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT,
           EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT]

//>> SET_[EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_DTS_RESULT2));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT,
           EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT]

//>> GET_[EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB2_DTS_RESULT2));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT,
           EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB2_DTS_RESULT2_DTS_8_RESULT]

//>> PREP_[FSXCOMP_FSXLOG_CBS_EL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_CBS_EL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_EL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_CBS_EL]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_CBS_EL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_EL;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_CBS_EL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL]

//>> PUT_[FSXCOMP_FSXLOG_CBS_EL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_CBS_EL(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_CBS_EL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_CBS_EL]

//>> PREP_[FSXCOMP_FSXLOG_CBS_EL_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_CBS_EL_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_EL_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_CBS_EL_FSI]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_CBS_EL_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_EL_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_CBS_EL_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_FSI]

//>> PUT_[FSXCOMP_FSXLOG_CBS_EL_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_CBS_EL_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_CBS_EL_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_CBS_EL_FSI]

//>> PREP_[FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE]


//>> SET_[FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE,
           FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE,
           FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE,
           FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_ENVSTAT_CHANGE]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS]

//>> CLEAR_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS]
static inline bool GET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_DURING_CBS]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS]

//>> CLEAR_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS]
static inline bool GET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_DROP_AFTER_CBS]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS]

//>> CLEAR_[FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS]
static inline bool GET_FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_CTRL_WRITE_DURING_CBS]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE]

//>> CLEAR_[FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE]
static inline bool GET_FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_INVALID_STATE]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED]

//>> SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED]

//>> CLEAR_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED]

//>> GET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED]
static inline bool GET_FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_EL, FSXCOMP_FSXLOG_CBS_EL_FSI, FSXCOMP_FSXLOG_CBS_EL_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_EL_PGOOD_LOW_WHILE_UNFENCED]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW]

//>> PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW]


//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8]

//>> SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8]

//>> GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI, FSXCOMP_FSXLOG_M1A_DATA_AREA_8_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1A_DATA_AREA_8_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8,
           FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1A_DATA_AREA_8_MDA_M1A_DATA_AREA_8]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_13_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_13_MDA_M1B_DATA_AREA_13]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_2_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_2_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_2_MDA_M1B_DATA_AREA_2]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW]


//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4]

//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_4_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_4_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_4_MDA_M2A_DATA_AREA_4]

//>> PREP_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI]

//>> PUT_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI]

//>> PREP_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR]

//>> PUT_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR]


//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_0_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_DATA_PAR_DIS_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPFSI_TP_DBG_PCB_TYPE_PAR_DIS_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_3_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_DISABLE_PARITY_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_TRACE_MODE_DATA_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_PIB_VSB_SBE_TRACE_MODE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_TPCPERV_VSB_TRACE_STOP]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT,
           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT,
           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT,
           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TP_GPIO_PIB_TIMEOUT]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_SPARE_PIB_CONTROL]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_TPCFSI_OPB_SW_RESET_DC]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_13_SPARE_OPB_CONTROL]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_14_SPARE_OPB_CONTROL]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_15_SPARE_OPB_CONTROL]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_16_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_17_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_18_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_19_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_20_SPARE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_21_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_22_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_23_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_24_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_25_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_26_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_27_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_28_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_29_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_30_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE]

//>> CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE]
static inline bool GET_FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL2_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL2_SET_WO_OR));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL2_SET_ROOT_CTRL2_31_FREE_USAGE]

//>> PREP_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI]

//>> PUT_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI]

//>> PREP_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR]

//>> PUT_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR]


//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS0_RX_REFCLK_TERM]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_SYS1_RX_REFCLK_TERM]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI0_RX_REFCLK_TERM]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_TP_AN_PCI1_RX_REFCLK_TERM]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31]

//>> SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31]

//>> GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI, FSXCOMP_FSXLOG_ROOT_CTRL6_SET_FSI_BYTE,
                           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_WO_OR));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31,
           FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_ROOT_CTRL6_SET_ROOT_CTRL6_8_31]

//>> PREP_[L3TRA0_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_TRACE_LO_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR0_TRACE_LO_DATA_REG]

//>> GET_[L3TRA0_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_TRACE_LO_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR0_TRACE_LO_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR0_TRACE_LO_DATA_REG]

//>> PUT_[L3TRA0_TR0_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR0_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR0_TRACE_LO_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR0_TRACE_LO_DATA_REG]


//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> CLEAR_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline bool GET_L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> CLEAR_[L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline bool GET_L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> CLEAR_[L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING]
static inline bool GET_L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> PREP_[L3TRA0_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR0_CONFIG_1]

//>> GET_[L3TRA0_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG_1;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR0_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_1]

//>> PUT_[L3TRA0_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_1));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR0_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR0_CONFIG_1]


//>> SET_[L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_1));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[L3TRA2_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR0_CONFIG_9]

//>> GET_[L3TRA2_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR0_CONFIG_9;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR0_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9]

//>> PUT_[L3TRA2_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR0_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR0_CONFIG_9]


//>> SET_[L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL,
           L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL,
           L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL,
           L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL,
           L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL,
           L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL,
           L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL,
           L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL,
           L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL,
           L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL,
           L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL,
           L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL,
           L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK,
           L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK,
           L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK,
           L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK,
           L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK,
           L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK,
           L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK,
           L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK,
           L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK,
           L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK,
           L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK,
           L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK,
           L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE,
           L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE,
           L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE,
           L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA2_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_SPARE_LT]

//>> SET_[L3TRA2_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA2_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_SPARE_LT]

//>> SET_[L3TRA2_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA2_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR0_CONFIG_9_SPARE_LT]

//>> CLEAR_[L3TRA2_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA2_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR0_CONFIG_9_SPARE_LT]

//>> GET_[L3TRA2_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA2_TR0_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_SPARE_LT]

//>> GET_[L3TRA2_TR0_CONFIG_9_SPARE_LT]
static inline bool GET_L3TRA2_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA2_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA2_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR0_CONFIG_9_SPARE_LT]

//>> PREP_[L3TRA2_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR1_CONFIG_0]

//>> GET_[L3TRA2_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_0;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR1_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_0]

//>> PUT_[L3TRA2_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_0));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR1_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR1_CONFIG_0]


//>> SET_[L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_0));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[L3TRA3_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR1_TRACE_HI_DATA_REG]

//>> GET_[L3TRA3_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR1_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR1_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR1_TRACE_HI_DATA_REG]

//>> PUT_[L3TRA3_TR1_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR1_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR1_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR1_TRACE_HI_DATA_REG]


//>> SET_[L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[MULTICAST_GROUP_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MULTICAST_GROUP_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MULTICAST_GROUP_3]

//>> GET_[MULTICAST_GROUP_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MULTICAST_GROUP_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_3;
#endif
    return fapi2::getScom(i_target, MULTICAST_GROUP_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MULTICAST_GROUP_3]

//>> PUT_[MULTICAST_GROUP_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MULTICAST_GROUP_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_3));
#endif
    return fapi2::putScom(i_target, MULTICAST_GROUP_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MULTICAST_GROUP_3]


//>> SET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_3_MULTICAST3_GROUP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_3));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_3_MULTICAST3_GROUP,
           MULTICAST_GROUP_3_MULTICAST3_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access MULTICAST_GROUP_3_MULTICAST3_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]

//>> SET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_3_MULTICAST3_GROUP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_3));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_3_MULTICAST3_GROUP,
           MULTICAST_GROUP_3_MULTICAST3_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access MULTICAST_GROUP_3_MULTICAST3_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]

//>> GET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]
static inline fapi2::buffer<uint64_t>& GET_MULTICAST_GROUP_3_MULTICAST3_GROUP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_3));
#endif
    return i_data.extractToRight<MULTICAST_GROUP_3_MULTICAST3_GROUP,
           MULTICAST_GROUP_3_MULTICAST3_GROUP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access MULTICAST_GROUP_3_MULTICAST3_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MULTICAST_GROUP_3_MULTICAST3_GROUP]

//>> PREP_[OTPC_M_MEASURE_REG13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_MEASURE_REG13(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG13;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_MEASURE_REG13]

//>> GET_[OTPC_M_MEASURE_REG13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_MEASURE_REG13(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG13;
#endif
    return fapi2::getScom(i_target, OTPC_M_MEASURE_REG13, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG13]

//>> PUT_[OTPC_M_MEASURE_REG13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_MEASURE_REG13(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG13));
#endif
    return fapi2::putScom(i_target, OTPC_M_MEASURE_REG13, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_MEASURE_REG13]


//>> SET_[OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG13));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA,
           OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA]

//>> SET_[OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG13));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA,
           OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA]

//>> GET_[OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG13));
#endif
    return i_data.extractToRight<OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA,
           OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG13_SEEPROM_MEASUREMENT13_DATA]

//>> PREP_[OTPC_M_MEASURE_REG8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_MEASURE_REG8(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG8;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_MEASURE_REG8]

//>> GET_[OTPC_M_MEASURE_REG8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_MEASURE_REG8(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG8;
#endif
    return fapi2::getScom(i_target, OTPC_M_MEASURE_REG8, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG8]

//>> PUT_[OTPC_M_MEASURE_REG8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_MEASURE_REG8(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG8));
#endif
    return fapi2::putScom(i_target, OTPC_M_MEASURE_REG8, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_MEASURE_REG8]


//>> SET_[OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG8));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA,
           OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA]

//>> SET_[OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG8));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA,
           OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA]

//>> GET_[OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG8));
#endif
    return i_data.extractToRight<OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA,
           OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG8_SEEPROM_MEASUREMENT8_DATA]

//>> PREP_[PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PROTECT_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PROTECT_MODE_REG]

//>> GET_[PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PROTECT_MODE_REG;
#endif
    return fapi2::getScom(i_target, PROTECT_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PROTECT_MODE_REG]

//>> PUT_[PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return fapi2::putScom(i_target, PROTECT_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PROTECT_MODE_REG]


//>> SET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PROTECT_MODE_REG_READ_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.setBit<PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> CLEAR_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.clearBit<PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline bool GET_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return i_data.getBit<PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.setBit<PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> CLEAR_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return o_data.clearBit<PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline bool GET_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PROTECT_MODE_REG));
#endif
    return i_data.getBit<PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> PREP_[REC_ERR_MST3_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST3_REG0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST3_REG0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST3_REG0]

//>> GET_[REC_ERR_MST3_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST3_REG0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST3_REG0;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST3_REG0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST3_REG0]

//>> PUT_[REC_ERR_MST3_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST3_REG0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST3_REG0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST3_REG0]


//>> SET_[REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_MASTER_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_MASTER_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE1_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE1_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE2_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE2_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE3_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE3_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE4_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE4_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE5_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE5_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE6_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE6_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE7_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE7_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE8_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE8_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE9_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE9_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE10_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE10_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE11_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE11_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE12_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE12_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE13_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE13_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE14_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE14_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.setBit<REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.getBit<REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE15_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE,
           REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG0_SLAVE15_MST3_ERROR_CODE]

//>> PREP_[REC_ERR_MST7_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST7_REG1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST7_REG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST7_REG1]

//>> GET_[REC_ERR_MST7_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST7_REG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST7_REG1;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST7_REG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST7_REG1]

//>> PUT_[REC_ERR_MST7_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST7_REG1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST7_REG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST7_REG1]


//>> SET_[REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_16_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_16_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_16_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_16_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_16_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_16_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_16_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_16_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_16_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_16_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_16_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_16_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_16_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_16_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_16_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_16_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_16_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_16_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_16_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_17_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_17_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_17_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_17_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_17_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_17_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_17_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_17_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_17_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_17_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_17_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_17_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_17_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_17_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_17_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_17_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_17_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_17_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_17_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_18_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_18_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_18_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_18_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_18_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_18_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_18_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_18_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_18_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_18_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_18_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_18_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_18_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_18_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_18_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_18_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_18_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_18_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_18_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_19_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_19_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_19_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_19_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_19_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_19_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_19_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_19_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_19_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_19_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_19_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_19_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_19_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_19_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_19_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_19_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_19_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_19_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_19_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_20_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_20_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_20_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_20_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_20_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_20_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_20_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_20_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_20_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_20_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_20_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_20_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_20_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_20_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_20_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_20_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_20_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_20_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_20_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_21_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_21_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_21_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_21_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_21_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_21_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_21_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_21_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_21_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_21_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_21_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_21_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_21_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_21_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_21_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_21_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_21_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_21_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_21_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_22_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_22_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_22_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_22_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_22_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_22_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_22_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_22_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_22_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_22_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_22_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_22_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_22_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_22_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_22_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_22_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_22_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_22_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_22_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_23_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_23_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_23_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_23_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_23_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_23_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_23_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_23_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_23_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_23_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_23_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_23_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_23_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_23_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_23_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_23_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_23_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_23_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_23_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_24_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_24_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_24_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_24_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_24_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_24_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_24_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_24_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_24_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_24_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_24_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_24_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_24_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_24_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_24_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_24_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_24_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_24_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_24_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_25_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_25_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_25_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_25_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_25_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_25_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_25_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_25_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_25_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_25_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_25_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_25_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_25_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_25_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_25_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_25_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_25_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_25_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_25_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_26_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_26_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_26_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_26_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_26_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_26_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_26_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_26_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_26_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_26_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_26_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_26_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_26_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_26_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_26_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_26_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_26_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_26_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_26_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_27_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_27_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_27_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_27_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_27_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_27_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_27_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_27_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_27_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_27_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_27_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_27_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_27_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_27_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_27_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_27_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_27_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_27_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_27_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_28_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_28_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_28_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_28_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_28_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_28_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_28_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_28_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_28_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_28_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_28_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_28_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_28_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_28_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_28_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_28_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_28_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_28_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_28_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_29_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_29_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_29_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_29_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_29_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_29_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_29_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_29_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_29_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_29_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_29_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_29_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_29_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_29_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_29_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_29_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_29_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_29_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_29_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_30_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_30_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_30_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_30_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_30_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_30_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_30_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_30_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_30_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_30_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_30_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_30_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_30_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_30_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_30_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_30_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_30_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_30_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_30_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.setBit<REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.getBit<REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_31_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG1_31_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_31_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_31_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_31_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG1_31_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_31_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG1_31_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG1_31_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG1_31_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_31_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG1_31_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG1_31_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG1_31_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG1_31_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG1_31_MST7_ERROR_CODE,
           REC_ERR_MST7_REG1_31_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG1_31_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG1_31_MST7_ERROR_CODE]

//>> PREP_[REC_ERR_MST9_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST9_REG1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST9_REG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST9_REG1]

//>> GET_[REC_ERR_MST9_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST9_REG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST9_REG1;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST9_REG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST9_REG1]

//>> PUT_[REC_ERR_MST9_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST9_REG1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST9_REG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST9_REG1]


//>> SET_[REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_16_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_16_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_16_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_16_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_16_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_16_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_16_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_16_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_16_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_16_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_16_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_16_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_16_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_16_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_16_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_16_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_16_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_16_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_16_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_17_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_17_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_17_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_17_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_17_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_17_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_17_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_17_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_17_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_17_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_17_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_17_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_17_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_17_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_17_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_17_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_17_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_17_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_17_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_18_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_18_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_18_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_18_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_18_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_18_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_18_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_18_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_18_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_18_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_18_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_18_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_18_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_18_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_18_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_18_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_18_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_18_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_18_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_19_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_19_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_19_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_19_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_19_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_19_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_19_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_19_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_19_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_19_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_19_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_19_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_19_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_19_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_19_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_19_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_19_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_19_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_19_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_20_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_20_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_20_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_20_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_20_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_20_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_20_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_20_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_20_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_20_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_20_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_20_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_20_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_20_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_20_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_20_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_20_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_20_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_20_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_21_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_21_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_21_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_21_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_21_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_21_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_21_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_21_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_21_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_21_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_21_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_21_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_21_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_21_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_21_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_21_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_21_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_21_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_21_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_22_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_22_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_22_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_22_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_22_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_22_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_22_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_22_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_22_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_22_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_22_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_22_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_22_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_22_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_22_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_22_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_22_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_22_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_22_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_23_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_23_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_23_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_23_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_23_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_23_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_23_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_23_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_23_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_23_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_23_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_23_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_23_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_23_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_23_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_23_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_23_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_23_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_23_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_24_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_24_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_24_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_24_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_24_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_24_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_24_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_24_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_24_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_24_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_24_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_24_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_24_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_24_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_24_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_24_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_24_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_24_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_24_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_25_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_25_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_25_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_25_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_25_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_25_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_25_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_25_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_25_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_25_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_25_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_25_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_25_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_25_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_25_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_25_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_25_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_25_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_25_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_26_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_26_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_26_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_26_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_26_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_26_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_26_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_26_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_26_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_26_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_26_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_26_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_26_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_26_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_26_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_26_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_26_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_26_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_26_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_27_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_27_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_27_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_27_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_27_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_27_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_27_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_27_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_27_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_27_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_27_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_27_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_27_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_27_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_27_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_27_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_27_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_27_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_27_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_28_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_28_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_28_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_28_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_28_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_28_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_28_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_28_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_28_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_28_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_28_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_28_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_28_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_28_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_28_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_28_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_28_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_28_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_28_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_29_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_29_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_29_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_29_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_29_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_29_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_29_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_29_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_29_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_29_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_29_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_29_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_29_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_29_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_29_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_29_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_29_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_29_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_29_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_30_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_30_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_30_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_30_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_30_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_30_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_30_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_30_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_30_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_30_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_30_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_30_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_30_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_30_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_30_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_30_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_30_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_30_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_30_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.setBit<REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.getBit<REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_31_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG1_31_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_31_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_31_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_31_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG1_31_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_31_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG1_31_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG1_31_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG1_31_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_31_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG1_31_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG1_31_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG1_31_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG1_31_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG1_31_MST9_ERROR_CODE,
           REC_ERR_MST9_REG1_31_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG1_31_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG1_31_MST9_ERROR_CODE]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG115]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG115(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG115;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG115]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG115]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG115(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG115;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG115, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG115]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG115]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG115(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG115));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG115, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG115]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG115));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115,
           SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG115));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115,
           SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG115));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115,
           SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG115_REGISTER115]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG122]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG122(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG122;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG122]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG122]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG122(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG122;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG122, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG122]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG122]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG122(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG122));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG122, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG122]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG122));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122,
           SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG122));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122,
           SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG122));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122,
           SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG122_REGISTER122]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG33]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG33(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG33;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG33]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG33]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG33(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG33;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG33, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG33]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG33]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG33(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG33));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG33, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG33]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG33));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33,
           SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG33));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33,
           SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG33));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33,
           SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG33_REGISTER33]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG52]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG52(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG52;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG52]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG52]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG52(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG52;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG52, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG52]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG52]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG52(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG52));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG52, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG52]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG52));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52,
           SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG52));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52,
           SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG52));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52,
           SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG52_REGISTER52]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG65]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG65(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG65;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG65]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG65]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG65(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG65;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG65, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG65]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG65]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG65(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG65));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG65, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG65]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG65));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65,
           SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG65));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65,
           SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG65));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65,
           SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG65_REGISTER65]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
