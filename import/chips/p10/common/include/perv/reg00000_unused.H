/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/perv/reg00000_unused.H $      */
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

#ifndef __PERV_REG00000_H_UNUSED__
#define __PERV_REG00000_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
{
#endif


//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY]


//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE,
           CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE,
           CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE,
           CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]

//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_INC_DCC]


//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SOFT_RESET]


//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DAC_DLY_DAC_DELAY_VALUE]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_DEC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_DEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_DEC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_DEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_DEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_DEC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_DEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_DEC));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE,
           CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_DEC_DCC_VALUE]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_INC_DCC]


//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_INIT_MODE]


//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_ADJUST_MODE_INIT_MD_SET]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_0]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_1]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_2]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CACHE_PDLY_FSM_STATES_3]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ORE_PDLY_STATE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_PDLY_FSM_STATES_ACHE_PDLY_STATE]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CACHE_IS_LATE_CACHE_IS_LATE_INVERT]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_STICK_CORE_SYNC_DONE_CORE_SYNC_DONE_STICK]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO]


//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO]


//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW]


//>> SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13]

//>> SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_13_SR_SCRATCH_REGISTER_13]

//>> PREP_[QMETRA0_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR0_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR0_CONFIG]

//>> GET_[QMETRA0_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR0_CONFIG;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR0_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG]

//>> PUT_[QMETRA0_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR0_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR0_CONFIG]


//>> SET_[QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> CLEAR_[QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline bool GET_QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> CLEAR_[QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline bool GET_QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE,
           QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE,
           QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE,
           QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_BANK_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_BANK_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_BANK_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_BANK_MODE]

//>> CLEAR_[QMETRA0_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_BANK_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_BANK_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_BANK_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_BANK_MODE]
static inline bool GET_QMETRA0_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_BANK_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_ENH_TRACE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_ENH_TRACE_MODE]

//>> CLEAR_[QMETRA0_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_ENH_TRACE_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_ENH_TRACE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_ENH_TRACE_MODE]

//>> GET_[QMETRA0_TR0_CONFIG_ENH_TRACE_MODE]
static inline bool GET_QMETRA0_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> GET_[QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL,
           QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL,
           QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> GET_[QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL,
           QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> CLEAR_[QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline bool GET_QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS]

//>> CLEAR_[QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS]

//>> GET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS]

//>> GET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS]
static inline bool GET_QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY]

//>> CLEAR_[QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY]

//>> GET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY]

//>> GET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY]
static inline bool GET_QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> CLEAR_[QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline bool GET_QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> CLEAR_[QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline bool GET_QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> CLEAR_[QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline bool GET_QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR0_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> PREP_[QMETRA0_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR1_CONFIG_4]

//>> GET_[QMETRA0_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_CONFIG_4;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR1_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_4]

//>> PUT_[QMETRA0_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_4));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR1_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR1_CONFIG_4]


//>> SET_[QMETRA0_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_4_A,
           QMETRA0_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_4_A]

//>> SET_[QMETRA0_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_4_A,
           QMETRA0_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_4_A]

//>> GET_[QMETRA0_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_4_A,
           QMETRA0_TR1_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_4_A]

//>> SET_[QMETRA0_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_4_B,
           QMETRA0_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_4_B]

//>> SET_[QMETRA0_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_4_B,
           QMETRA0_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_4_B]

//>> GET_[QMETRA0_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_4_B,
           QMETRA0_TR1_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_4_B]

//>> PREP_[EPS_DBG_INST1_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_INST1_COND_REG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST1_COND_REG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_INST1_COND_REG_2]

//>> GET_[EPS_DBG_INST1_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_INST1_COND_REG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST1_COND_REG_2;
#endif
    return fapi2::getScom(i_target, EPS_DBG_INST1_COND_REG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2]

//>> PUT_[EPS_DBG_INST1_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_INST1_COND_REG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return fapi2::putScom(i_target, EPS_DBG_INST1_COND_REG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_INST1_COND_REG_2]


//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> SET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_TO_CMP_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST1_COND_REG_2_TO_CMP_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]

//>> SET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST1_COND_REG_2_TO_CMP_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST1_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST1_COND_REG_2_TO_CMP_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]

//>> GET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST1_COND_REG_2_TO_CMP_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST1_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST1_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST1_COND_REG_2_TO_CMP_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_INST1_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST1_COND_REG_2_TO_CMP_LT]

//>> PREP_[EPS_DBG_INST2_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_INST2_COND_REG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST2_COND_REG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_INST2_COND_REG_2]

//>> GET_[EPS_DBG_INST2_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_INST2_COND_REG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_INST2_COND_REG_2;
#endif
    return fapi2::getScom(i_target, EPS_DBG_INST2_COND_REG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2]

//>> PUT_[EPS_DBG_INST2_COND_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_INST2_COND_REG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return fapi2::putScom(i_target, EPS_DBG_INST2_COND_REG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_INST2_COND_REG_2]


//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_A]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_1_B]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_A]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B,
           EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_CROSS_COUPLE_SELECT_2_B]

//>> SET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_TO_CMP_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST2_COND_REG_2_TO_CMP_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]

//>> SET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_INST2_COND_REG_2_TO_CMP_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_INST2_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST2_COND_REG_2_TO_CMP_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]

//>> GET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_INST2_COND_REG_2_TO_CMP_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_INST2_COND_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_INST2_COND_REG_2_TO_CMP_LT,
           EPS_DBG_INST2_COND_REG_2_TO_CMP_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_INST2_COND_REG_2_TO_CMP_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_INST2_COND_REG_2_TO_CMP_LT]

//>> PREP_[EPS_DBG_XTRA_TRACE_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_XTRA_TRACE_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_XTRA_TRACE_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_XTRA_TRACE_MODE]

//>> GET_[EPS_DBG_XTRA_TRACE_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_XTRA_TRACE_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_XTRA_TRACE_MODE;
#endif
    return fapi2::getScom(i_target, EPS_DBG_XTRA_TRACE_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_XTRA_TRACE_MODE]

//>> PUT_[EPS_DBG_XTRA_TRACE_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_XTRA_TRACE_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_XTRA_TRACE_MODE));
#endif
    return fapi2::putScom(i_target, EPS_DBG_XTRA_TRACE_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_XTRA_TRACE_MODE]


//>> SET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_XTRA_TRACE_MODE));
#endif
    return o_data.insertFromRight<EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA,
           EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]

//>> SET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_XTRA_TRACE_MODE));
#endif
    return o_data.insertFromRight<EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA,
           EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]

//>> GET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_XTRA_TRACE_MODE));
#endif
    return i_data.extractToRight<EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA,
           EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_XTRA_TRACE_MODE_XTRA_TRACE_MODE_DATA]

//>> PREP_[EPS_FIR_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_MODE_REG]

//>> GET_[EPS_FIR_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_MODE_REG;
#endif
    return fapi2::getScom(i_target, EPS_FIR_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_MODE_REG]

//>> PUT_[EPS_FIR_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_MODE_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return fapi2::putScom(i_target, EPS_FIR_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_MODE_REG]


//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_RECOV]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_SPATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_LXSTOP]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]
static inline bool GET_EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_XSTOP_LOCK_HOSTATTN]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG05]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG05]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG05]

//>> SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> CLEAR_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> GET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> GET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]
static inline bool GET_EPS_FIR_MODE_REG_DISABLE_IOPB_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_DISABLE_IOPB_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_DISABLE_IOPB_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_DISABLE_IOPB_ERR]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG07]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG07]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG07]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG08]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG08]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG08]

//>> SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> CLEAR_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> GET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> GET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]
static inline bool GET_EPS_FIR_MODE_REG_MASK_DIRECT_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MASK_DIRECT_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_MASK_DIRECT_ERROR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MASK_DIRECT_ERROR]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG10]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG10]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG10]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG11]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG11]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG11]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG12]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG12]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG12]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG13]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG13]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG13]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG14]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG14]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG14]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_FIR_MODE_REG_MODE_REG15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> SET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.setBit<EPS_FIR_MODE_REG_MODE_REG15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> CLEAR_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return o_data.clearBit<EPS_FIR_MODE_REG_MODE_REG15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_MODE_REG_MODE_REG15]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.extractToRight<EPS_FIR_MODE_REG_MODE_REG15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> GET_[EPS_FIR_MODE_REG_MODE_REG15]
static inline bool GET_EPS_FIR_MODE_REG_MODE_REG15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_MODE_REG));
#endif
    return i_data.getBit<EPS_FIR_MODE_REG_MODE_REG15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_MODE_REG_MODE_REG15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_MODE_REG_MODE_REG15]

//>> PREP_[EPS_THERM_WSUB_DTS_TRC_RESULT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_DTS_TRC_RESULT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_DTS_TRC_RESULT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_DTS_TRC_RESULT]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_DTS_TRC_RESULT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_DTS_TRC_RESULT;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_DTS_TRC_RESULT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT]

//>> PUT_[EPS_THERM_WSUB_DTS_TRC_RESULT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_DTS_TRC_RESULT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_DTS_TRC_RESULT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_DTS_TRC_RESULT]


//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE,
           EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE,
           EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE,
           EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_VALUE]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.setBit<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> CLEAR_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]
static inline bool GET_EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.getBit<EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_TIMESTAMP_COUNTER_OVERFLOW_ERR]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT,
           EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]

//>> SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT,
           EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]

//>> GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_DTS_TRC_RESULT));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT,
           EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_DTS_TRC_RESULT_DTS_1_RESULT]

//>> PREP_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A]

//>> PUT_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A]

//>> PREP_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI]

//>> PUT_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI]

//>> PREP_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE]


//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1]

//>> CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1]
static inline bool GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PERMISSION_TO_SEND_DOORBELL_1]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1]

//>> CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1]
static inline bool GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_ABORT_DOORBELL_1]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING]

//>> CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING]
static inline bool GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_LBUS_SLAVE_1B_PENDING]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING]

//>> CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING]
static inline bool GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_PIB_SLAVE_1A_PENDING]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1]

//>> CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1]
static inline bool GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XDN_DOORBELL_1]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1]

//>> CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1]
static inline bool GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_XUP_DOORBELL_1]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1A]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1A]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_HEADER_COUNT_1B]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B]

//>> SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B]

//>> GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A, FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI,
                           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_FSI_BYTE));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B,
           FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_DOORBELL_STATUS_CONTROL_1A_DATA_COUNT_1B]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_7_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_7_MDA_M1B_DATA_AREA_7]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW]


//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1]

//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_1_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_1_MDA_M2A_DATA_AREA_1]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_12_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_12_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_12_MDA_M2B_DATA_AREA_12]

//>> PREP_[FSXCOMP_FSXLOG_RCS_EL0_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_RCS_EL0_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL0_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_RCS_EL0_FSI]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL0_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_RCS_EL0_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL0_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_RCS_EL0_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL0_FSI]

//>> PUT_[FSXCOMP_FSXLOG_RCS_EL0_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_RCS_EL0_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL0_FSI, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL0_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_RCS_EL0_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_RCS_EL0_FSI]

//>> PREP_[FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL0_FSI, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL0_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_RCS_EL0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_RCS_EL0_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL0_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_RCS_EL0_RO]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_RCS_EL0_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL0_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_RCS_EL0_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL0_RO]

//>> PUT_[FSXCOMP_FSXLOG_RCS_EL0_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_RCS_EL0_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL0_FSI, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL0_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_RCS_EL0_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_RCS_EL0_RO]


//>> SET_[FSXCOMP_FSXLOG_RCS_EL0_SNS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL0_SNS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL0_FSI, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL0_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL0_SNS,
           FSXCOMP_FSXLOG_RCS_EL0_SNS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL0_SNS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL0_SNS]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL0_SNS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL0_SNS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL0_FSI, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL0_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL0_SNS,
           FSXCOMP_FSXLOG_RCS_EL0_SNS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL0_SNS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL0_SNS]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL0_SNS]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_RCS_EL0_SNS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL0_FSI, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL0_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_RCS_EL0_SNS,
           FSXCOMP_FSXLOG_RCS_EL0_SNS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL0_SNS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL0_SNS]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL0_ERR]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL0_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL0_FSI, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL0_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL0_ERR,
           FSXCOMP_FSXLOG_RCS_EL0_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL0_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL0_ERR]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL0_ERR]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL0_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL0_FSI, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL0_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL0_ERR,
           FSXCOMP_FSXLOG_RCS_EL0_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL0_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL0_ERR]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL0_ERR]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_RCS_EL0_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL0_FSI, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL0_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_RCS_EL0_ERR,
           FSXCOMP_FSXLOG_RCS_EL0_ERR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL0_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL0_ERR]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL0_TIME]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL0_TIME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL0_FSI, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL0_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL0_TIME,
           FSXCOMP_FSXLOG_RCS_EL0_TIME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL0_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL0_TIME]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL0_TIME]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL0_TIME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL0_FSI, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL0_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL0_TIME,
           FSXCOMP_FSXLOG_RCS_EL0_TIME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL0_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL0_TIME]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL0_TIME]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_RCS_EL0_TIME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL0_FSI, FSXCOMP_FSXLOG_RCS_EL0_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL0_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_RCS_EL0_TIME,
           FSXCOMP_FSXLOG_RCS_EL0_TIME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL0_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL0_TIME]

//>> PREP_[L3TRA0_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR0_CONFIG_4]

//>> GET_[L3TRA0_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG_4;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR0_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_4]

//>> PUT_[L3TRA0_TR0_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR0_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_4));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR0_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR0_CONFIG_4]


//>> SET_[L3TRA0_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_4_A,
           L3TRA0_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_4_A]

//>> SET_[L3TRA0_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_4_A,
           L3TRA0_TR0_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_4_A]

//>> GET_[L3TRA0_TR0_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_4_A,
           L3TRA0_TR0_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_4_A]

//>> SET_[L3TRA0_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_4_B,
           L3TRA0_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_4_B]

//>> SET_[L3TRA0_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_4_B,
           L3TRA0_TR0_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_4_B]

//>> GET_[L3TRA0_TR0_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_4));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_4_B,
           L3TRA0_TR0_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_4_B]

//>> PREP_[L3TRA0_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR1_CONFIG]

//>> GET_[L3TRA0_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR1_CONFIG;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR1_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG]

//>> PUT_[L3TRA0_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR1_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR1_CONFIG]


//>> SET_[L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> CLEAR_[L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline bool GET_L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> CLEAR_[L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline bool GET_L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE,
           L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE,
           L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE,
           L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_BANK_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_BANK_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_BANK_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_BANK_MODE]

//>> CLEAR_[L3TRA0_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_BANK_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_BANK_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_BANK_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_BANK_MODE]
static inline bool GET_L3TRA0_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_BANK_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_ENH_TRACE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_ENH_TRACE_MODE]

//>> CLEAR_[L3TRA0_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_ENH_TRACE_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_ENH_TRACE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_ENH_TRACE_MODE]

//>> GET_[L3TRA0_TR1_CONFIG_ENH_TRACE_MODE]
static inline bool GET_L3TRA0_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> GET_[L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> GET_[L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> CLEAR_[L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline bool GET_L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS]

//>> CLEAR_[L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS]
static inline bool GET_L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY]

//>> CLEAR_[L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY]
static inline bool GET_L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> CLEAR_[L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline bool GET_L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> CLEAR_[L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline bool GET_L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> CLEAR_[L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline bool GET_L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> PREP_[L3TRA1_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR0_CONFIG]

//>> GET_[L3TRA1_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_CONFIG;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR0_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG]

//>> PUT_[L3TRA1_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR0_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR0_CONFIG]


//>> SET_[L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> CLEAR_[L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline bool GET_L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> CLEAR_[L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline bool GET_L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE,
           L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE,
           L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE,
           L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_BANK_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_BANK_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_BANK_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_BANK_MODE]

//>> CLEAR_[L3TRA1_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_BANK_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_BANK_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_BANK_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_BANK_MODE]
static inline bool GET_L3TRA1_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_BANK_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_ENH_TRACE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_ENH_TRACE_MODE]

//>> CLEAR_[L3TRA1_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_ENH_TRACE_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_ENH_TRACE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_ENH_TRACE_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_ENH_TRACE_MODE]
static inline bool GET_L3TRA1_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> GET_[L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> GET_[L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> CLEAR_[L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline bool GET_L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS]

//>> CLEAR_[L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS]
static inline bool GET_L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY]

//>> CLEAR_[L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY]
static inline bool GET_L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> CLEAR_[L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline bool GET_L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> CLEAR_[L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline bool GET_L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> CLEAR_[L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline bool GET_L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> PREP_[L3TRA1_TR1_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR1_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR1_CONFIG_2]

//>> GET_[L3TRA1_TR1_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR1_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG_2;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR1_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_2]

//>> PUT_[L3TRA1_TR1_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR1_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_2));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR1_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR1_CONFIG_2]


//>> SET_[L3TRA1_TR1_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_2_A,
           L3TRA1_TR1_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_2_A]

//>> SET_[L3TRA1_TR1_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_2_A,
           L3TRA1_TR1_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_2_A]

//>> GET_[L3TRA1_TR1_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_2));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_2_A,
           L3TRA1_TR1_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_2_A]

//>> SET_[L3TRA1_TR1_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_2_B,
           L3TRA1_TR1_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_2_B]

//>> SET_[L3TRA1_TR1_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_2_B,
           L3TRA1_TR1_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_2_B]

//>> GET_[L3TRA1_TR1_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_2));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_2_B,
           L3TRA1_TR1_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_2_B]

//>> PREP_[L3TRA2_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR1_CONFIG_5]

//>> GET_[L3TRA2_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_5;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR1_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_5]

//>> PUT_[L3TRA2_TR1_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR1_CONFIG_5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_5));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR1_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR1_CONFIG_5]


//>> SET_[L3TRA2_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_5_C,
           L3TRA2_TR1_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_5_C]

//>> SET_[L3TRA2_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_5_C,
           L3TRA2_TR1_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_5_C]

//>> GET_[L3TRA2_TR1_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_5));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_5_C,
           L3TRA2_TR1_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_5_C]

//>> SET_[L3TRA2_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_5_D,
           L3TRA2_TR1_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_5_D]

//>> SET_[L3TRA2_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_5_D,
           L3TRA2_TR1_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_5_D]

//>> GET_[L3TRA2_TR1_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_5));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_5_D,
           L3TRA2_TR1_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_5_D]

//>> PREP_[L3TRA3_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR0_CONFIG_3]

//>> GET_[L3TRA3_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_3]

//>> PUT_[L3TRA3_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR0_CONFIG_3]


//>> SET_[L3TRA3_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_3_C,
           L3TRA3_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_3_C]

//>> SET_[L3TRA3_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_3_C,
           L3TRA3_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_3_C]

//>> GET_[L3TRA3_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_3_C,
           L3TRA3_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_3_C]

//>> SET_[L3TRA3_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_3_D,
           L3TRA3_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_3_D]

//>> SET_[L3TRA3_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_3_D,
           L3TRA3_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_3_D]

//>> GET_[L3TRA3_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_3_D,
           L3TRA3_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_3_D]

//>> PREP_[REC_ERR_MST2_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST2_REG3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST2_REG3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST2_REG3]

//>> GET_[REC_ERR_MST2_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST2_REG3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST2_REG3;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST2_REG3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST2_REG3]

//>> PUT_[REC_ERR_MST2_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST2_REG3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST2_REG3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST2_REG3]


//>> SET_[REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_48_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_48_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_48_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_48_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_48_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_48_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_48_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_48_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_48_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_48_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_48_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_48_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_48_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_48_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_48_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_48_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_48_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_48_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_48_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_49_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_49_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_49_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_49_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_49_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_49_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_49_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_49_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_49_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_49_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_49_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_49_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_49_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_49_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_49_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_49_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_49_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_49_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_49_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_50_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_50_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_50_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_50_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_50_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_50_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_50_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_50_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_50_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_50_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_50_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_50_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_50_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_50_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_50_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_50_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_50_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_50_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_50_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_51_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_51_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_51_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_51_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_51_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_51_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_51_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_51_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_51_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_51_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_51_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_51_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_51_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_51_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_51_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_51_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_51_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_51_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_51_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_52_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_52_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_52_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_52_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_52_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_52_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_52_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_52_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_52_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_52_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_52_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_52_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_52_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_52_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_52_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_52_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_52_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_52_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_52_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_53_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_53_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_53_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_53_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_53_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_53_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_53_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_53_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_53_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_53_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_53_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_53_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_53_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_53_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_53_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_53_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_53_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_53_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_53_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_54_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_54_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_54_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_54_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_54_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_54_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_54_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_54_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_54_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_54_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_54_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_54_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_54_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_54_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_54_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_54_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_54_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_54_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_54_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_55_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_55_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_55_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_55_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_55_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_55_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_55_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_55_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_55_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_55_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_55_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_55_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_55_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_55_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_55_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_55_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_55_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_55_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_55_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_56_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_56_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_56_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_56_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_56_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_56_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_56_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_56_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_56_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_56_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_56_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_56_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_56_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_56_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_56_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_56_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_56_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_56_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_56_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_57_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_57_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_57_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_57_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_57_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_57_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_57_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_57_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_57_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_57_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_57_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_57_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_57_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_57_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_57_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_57_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_57_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_57_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_57_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_58_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_58_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_58_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_58_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_58_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_58_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_58_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_58_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_58_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_58_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_58_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_58_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_58_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_58_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_58_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_58_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_58_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_58_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_58_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_59_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_59_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_59_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_59_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_59_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_59_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_59_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_59_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_59_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_59_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_59_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_59_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_59_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_59_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_59_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_59_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_59_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_59_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_59_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_60_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_60_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_60_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_60_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_60_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_60_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_60_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_60_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_60_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_60_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_60_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_60_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_60_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_60_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_60_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_60_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_60_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_60_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_60_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_61_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_61_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_61_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_61_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_61_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_61_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_61_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_61_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_61_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_61_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_61_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_61_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_61_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_61_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_61_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_61_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_61_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_61_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_61_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_62_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_62_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_62_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_62_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_62_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_62_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_62_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_62_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_62_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_62_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_62_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_62_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_62_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_62_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_62_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_62_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_62_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_62_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_62_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.setBit<REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.getBit<REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_63_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG3_63_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_63_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_63_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_63_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG3_63_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_63_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG3_63_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG3_63_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG3_63_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_63_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG3_63_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG3_63_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG3_63_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG3_63_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG3_63_MST2_ERROR_CODE,
           REC_ERR_MST2_REG3_63_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG3_63_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG3_63_MST2_ERROR_CODE]

//>> PREP_[REC_ERR_MST6_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST6_REG2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST6_REG2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST6_REG2]

//>> GET_[REC_ERR_MST6_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST6_REG2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST6_REG2;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST6_REG2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST6_REG2]

//>> PUT_[REC_ERR_MST6_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST6_REG2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST6_REG2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST6_REG2]


//>> SET_[REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_32_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_32_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_32_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_32_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_32_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_32_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_32_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_32_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_32_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_32_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_32_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_32_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_32_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_32_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_32_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_32_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_32_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_32_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_32_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_33_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_33_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_33_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_33_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_33_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_33_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_33_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_33_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_33_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_33_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_33_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_33_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_33_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_33_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_33_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_33_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_33_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_33_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_33_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_34_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_34_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_34_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_34_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_34_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_34_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_34_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_34_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_34_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_34_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_34_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_34_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_34_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_34_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_34_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_34_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_34_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_34_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_34_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_35_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_35_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_35_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_35_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_35_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_35_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_35_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_35_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_35_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_35_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_35_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_35_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_35_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_35_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_35_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_35_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_35_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_35_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_35_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_36_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_36_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_36_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_36_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_36_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_36_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_36_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_36_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_36_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_36_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_36_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_36_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_36_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_36_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_36_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_36_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_36_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_36_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_36_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_37_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_37_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_37_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_37_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_37_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_37_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_37_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_37_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_37_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_37_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_37_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_37_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_37_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_37_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_37_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_37_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_37_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_37_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_37_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_38_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_38_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_38_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_38_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_38_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_38_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_38_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_38_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_38_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_38_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_38_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_38_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_38_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_38_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_38_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_38_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_38_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_38_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_38_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_39_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_39_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_39_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_39_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_39_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_39_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_39_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_39_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_39_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_39_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_39_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_39_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_39_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_39_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_39_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_39_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_39_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_39_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_39_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_40_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_40_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_40_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_40_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_40_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_40_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_40_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_40_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_40_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_40_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_40_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_40_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_40_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_40_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_40_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_40_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_40_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_40_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_40_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_41_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_41_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_41_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_41_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_41_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_41_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_41_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_41_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_41_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_41_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_41_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_41_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_41_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_41_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_41_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_41_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_41_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_41_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_41_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_42_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_42_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_42_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_42_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_42_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_42_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_42_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_42_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_42_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_42_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_42_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_42_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_42_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_42_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_42_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_42_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_42_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_42_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_42_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_43_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_43_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_43_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_43_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_43_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_43_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_43_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_43_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_43_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_43_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_43_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_43_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_43_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_43_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_43_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_43_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_43_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_43_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_43_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_44_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_44_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_44_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_44_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_44_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_44_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_44_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_44_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_44_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_44_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_44_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_44_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_44_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_44_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_44_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_44_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_44_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_44_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_44_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_45_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_45_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_45_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_45_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_45_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_45_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_45_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_45_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_45_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_45_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_45_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_45_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_45_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_45_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_45_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_45_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_45_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_45_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_45_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_46_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_46_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_46_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_46_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_46_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_46_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_46_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_46_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_46_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_46_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_46_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_46_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_46_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_46_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_46_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_46_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_46_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_46_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_46_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.setBit<REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.getBit<REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_47_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG2_47_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_47_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_47_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_47_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG2_47_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_47_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG2_47_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG2_47_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG2_47_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_47_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG2_47_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG2_47_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG2_47_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG2_47_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG2_47_MST6_ERROR_CODE,
           REC_ERR_MST6_REG2_47_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG2_47_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG2_47_MST6_ERROR_CODE]

//>> PREP_[REC_ERR_MST8_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST8_REG2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST8_REG2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST8_REG2]

//>> GET_[REC_ERR_MST8_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST8_REG2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST8_REG2;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST8_REG2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST8_REG2]

//>> PUT_[REC_ERR_MST8_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST8_REG2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST8_REG2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST8_REG2]


//>> SET_[REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_32_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_32_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_32_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_32_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_32_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_32_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_32_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_32_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_32_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_32_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_32_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_32_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_32_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_32_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_32_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_32_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_32_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_32_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_32_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_33_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_33_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_33_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_33_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_33_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_33_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_33_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_33_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_33_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_33_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_33_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_33_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_33_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_33_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_33_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_33_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_33_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_33_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_33_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_34_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_34_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_34_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_34_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_34_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_34_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_34_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_34_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_34_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_34_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_34_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_34_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_34_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_34_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_34_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_34_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_34_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_34_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_34_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_35_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_35_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_35_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_35_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_35_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_35_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_35_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_35_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_35_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_35_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_35_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_35_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_35_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_35_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_35_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_35_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_35_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_35_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_35_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_36_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_36_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_36_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_36_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_36_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_36_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_36_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_36_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_36_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_36_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_36_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_36_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_36_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_36_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_36_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_36_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_36_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_36_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_36_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_37_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_37_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_37_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_37_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_37_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_37_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_37_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_37_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_37_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_37_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_37_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_37_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_37_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_37_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_37_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_37_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_37_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_37_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_37_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_38_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_38_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_38_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_38_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_38_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_38_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_38_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_38_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_38_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_38_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_38_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_38_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_38_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_38_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_38_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_38_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_38_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_38_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_38_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_39_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_39_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_39_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_39_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_39_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_39_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_39_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_39_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_39_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_39_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_39_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_39_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_39_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_39_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_39_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_39_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_39_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_39_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_39_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_40_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_40_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_40_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_40_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_40_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_40_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_40_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_40_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_40_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_40_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_40_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_40_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_40_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_40_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_40_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_40_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_40_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_40_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_40_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_41_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_41_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_41_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_41_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_41_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_41_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_41_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_41_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_41_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_41_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_41_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_41_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_41_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_41_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_41_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_41_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_41_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_41_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_41_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_42_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_42_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_42_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_42_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_42_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_42_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_42_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_42_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_42_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_42_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_42_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_42_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_42_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_42_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_42_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_42_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_42_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_42_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_42_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_43_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_43_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_43_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_43_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_43_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_43_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_43_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_43_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_43_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_43_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_43_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_43_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_43_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_43_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_43_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_43_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_43_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_43_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_43_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_44_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_44_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_44_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_44_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_44_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_44_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_44_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_44_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_44_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_44_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_44_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_44_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_44_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_44_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_44_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_44_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_44_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_44_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_44_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_45_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_45_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_45_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_45_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_45_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_45_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_45_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_45_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_45_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_45_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_45_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_45_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_45_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_45_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_45_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_45_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_45_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_45_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_45_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_46_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_46_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_46_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_46_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_46_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_46_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_46_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_46_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_46_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_46_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_46_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_46_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_46_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_46_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_46_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_46_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_46_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_46_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_46_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.setBit<REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.getBit<REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_47_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG2_47_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_47_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_47_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_47_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG2_47_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_47_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG2_47_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG2_47_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG2_47_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_47_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG2_47_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG2_47_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG2_47_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG2_47_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG2_47_MST8_ERROR_CODE,
           REC_ERR_MST8_REG2_47_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG2_47_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG2_47_MST8_ERROR_CODE]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
