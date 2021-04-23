/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/perv/reg00024_unused.H $      */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2019,2021                                                    */
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

#ifndef __PERV_REG00024_H_UNUSED__
#define __PERV_REG00024_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
{
#endif


//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_SWAP_CACHE_INC_DEC_CACHE_INC_DEC_INVERT]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_DCC_OVERRIDE_VALUE]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE,
           CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_DCC_TARGET_TARGET_VALUE]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SOFT_RESET]


//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_INIT_MODE]


//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SINGLE_STEP_MODE]


//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_1_VAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL,
           CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL,
           CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL,
           CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_2_VAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_3_VAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL,
           CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL,
           CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL,
           CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_PHASE_MEASUREMENT_4_VAL]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_0]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_1]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_2]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_CORE_PDLY_FSM_STATES_3]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_CHICKEN_SWITCHES_STOP_ON_ERROR]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE,
           CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_IGNORE_CNT_IGNORE_CNT_VALUE]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> PREP_[CTRL_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CTRL_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTRL_PROTECT_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CTRL_PROTECT_MODE_REG]

//>> GET_[CTRL_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CTRL_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTRL_PROTECT_MODE_REG;
#endif
    return fapi2::getScom(i_target, CTRL_PROTECT_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CTRL_PROTECT_MODE_REG]

//>> PUT_[CTRL_PROTECT_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CTRL_PROTECT_MODE_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return fapi2::putScom(i_target, CTRL_PROTECT_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CTRL_PROTECT_MODE_REG]


//>> SET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.setBit<CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> CLEAR_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.clearBit<CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> GET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]
static inline bool GET_CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return i_data.getBit<CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTRL_PROTECT_MODE_REG_READ_PROTECT_ENABLE]

//>> SET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.insertFromRight<CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> SET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.setBit<CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> CLEAR_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return o_data.clearBit<CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return i_data.extractToRight<CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> GET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]
static inline bool GET_CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTRL_PROTECT_MODE_REG));
#endif
    return i_data.getBit<CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTRL_PROTECT_MODE_REG_WRITE_PROTECT_ENABLE]

//>> PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_CLKSTOP_ON_XSTOP_MASK5;
#endif
    return fapi2::getScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]

//>> PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return fapi2::putScom(i_target, EPS_FIR_CLKSTOP_ON_XSTOP_MASK5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5]


//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_RECOV_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SPATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_LXSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_HOSTATTN_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_SYS_XSTOP_STAGED_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_DBG_TRIG_ERR]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP01]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP02]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP03]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP04]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP05]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP06]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP07]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP08]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP09]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP10]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP11]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP12]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP13]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP14]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.insertFromRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.setBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return o_data.clearBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.extractToRight<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]
static inline bool GET_EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_CLKSTOP_ON_XSTOP_MASK5));
#endif
    return i_data.getBit<EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_CLKSTOP_ON_XSTOP_MASK5_UNIT_TC_FIR_LOCAL_XSTOP15]

//>> PREP_[EPS_PSC_WRITE_PROTECT_ENABLE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_PSC_WRITE_PROTECT_ENABLE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_WRITE_PROTECT_ENABLE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_PSC_WRITE_PROTECT_ENABLE_REG]

//>> GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_PSC_WRITE_PROTECT_ENABLE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_PSC_WRITE_PROTECT_ENABLE_REG;
#endif
    return fapi2::getScom(i_target, EPS_PSC_WRITE_PROTECT_ENABLE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG]

//>> PUT_[EPS_PSC_WRITE_PROTECT_ENABLE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_PSC_WRITE_PROTECT_ENABLE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return fapi2::putScom(i_target, EPS_PSC_WRITE_PROTECT_ENABLE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_PSC_WRITE_PROTECT_ENABLE_REG]


//>> SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.setBit<EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> CLEAR_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.clearBit<EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return i_data.extractToRight<EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]
static inline bool GET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return i_data.getBit<EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_ENABLE_RING_LOCKING]

//>> SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.insertFromRight<EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& SET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.setBit<EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> CLEAR_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return o_data.clearBit<EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline fapi2::buffer<uint64_t>& GET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return i_data.extractToRight<EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]
static inline bool GET_EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_PSC_WRITE_PROTECT_ENABLE_REG));
#endif
    return i_data.getBit<EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_PSC_WRITE_PROTECT_ENABLE_REG_RESERVED_RING_LOCKING]

//>> PREP_[FSXCOMP_FSXLOG_CBS_TR_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_CBS_TR_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_TR_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_CBS_TR_FSI]

//>> GET_[FSXCOMP_FSXLOG_CBS_TR_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_CBS_TR_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_TR_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_CBS_TR_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_TR_FSI]

//>> PUT_[FSXCOMP_FSXLOG_CBS_TR_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_CBS_TR_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_TR_FSI, FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE, FSXCOMP_FSXLOG_CBS_TR_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_CBS_TR_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_CBS_TR_FSI]

//>> PREP_[FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_TR_FSI, FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE, FSXCOMP_FSXLOG_CBS_TR_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_CBS_TR_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_CBS_TR_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_TR_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_CBS_TR_RO]

//>> GET_[FSXCOMP_FSXLOG_CBS_TR_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_CBS_TR_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_TR_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_CBS_TR_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_TR_RO]

//>> PUT_[FSXCOMP_FSXLOG_CBS_TR_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_CBS_TR_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_TR_FSI, FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE, FSXCOMP_FSXLOG_CBS_TR_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_CBS_TR_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_CBS_TR_RO]


//>> SET_[FSXCOMP_FSXLOG_CBS_TR_SIGNATURE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_TR_SIGNATURE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_TR_FSI, FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE, FSXCOMP_FSXLOG_CBS_TR_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_TR_SIGNATURE,
           FSXCOMP_FSXLOG_CBS_TR_SIGNATURE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_TR_SIGNATURE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_TR_SIGNATURE]

//>> SET_[FSXCOMP_FSXLOG_CBS_TR_SIGNATURE]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_TR_SIGNATURE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_TR_FSI, FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE, FSXCOMP_FSXLOG_CBS_TR_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_TR_SIGNATURE,
           FSXCOMP_FSXLOG_CBS_TR_SIGNATURE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_TR_SIGNATURE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_TR_SIGNATURE]

//>> GET_[FSXCOMP_FSXLOG_CBS_TR_SIGNATURE]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_CBS_TR_SIGNATURE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_TR_FSI, FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE, FSXCOMP_FSXLOG_CBS_TR_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_CBS_TR_SIGNATURE,
           FSXCOMP_FSXLOG_CBS_TR_SIGNATURE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_TR_SIGNATURE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_TR_SIGNATURE]

//>> SET_[FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_TR_FSI, FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE, FSXCOMP_FSXLOG_CBS_TR_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY,
           FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY]

//>> SET_[FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_TR_FSI, FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE, FSXCOMP_FSXLOG_CBS_TR_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY,
           FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY]

//>> GET_[FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_TR_FSI, FSXCOMP_FSXLOG_CBS_TR_FSI_BYTE, FSXCOMP_FSXLOG_CBS_TR_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY,
           FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_TR_TRANS_DELAY]

//>> PREP_[FSXCOMP_FSXLOG_CBS_TR_HIST]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_CBS_TR_HIST(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_TR_HIST;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_CBS_TR_HIST]

//>> GET_[FSXCOMP_FSXLOG_CBS_TR_HIST]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_CBS_TR_HIST(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_TR_HIST;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_CBS_TR_HIST, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_TR_HIST]

//>> PUT_[FSXCOMP_FSXLOG_CBS_TR_HIST]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_CBS_TR_HIST(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_TR_HIST, FSXCOMP_FSXLOG_CBS_TR_HIST_FSI,
                           FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_CBS_TR_HIST, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_CBS_TR_HIST]

//>> PREP_[FSXCOMP_FSXLOG_CBS_TR_HIST_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_CBS_TR_HIST_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_TR_HIST_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_CBS_TR_HIST_FSI]

//>> GET_[FSXCOMP_FSXLOG_CBS_TR_HIST_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_CBS_TR_HIST_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_TR_HIST_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_CBS_TR_HIST_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_TR_HIST_FSI]

//>> PUT_[FSXCOMP_FSXLOG_CBS_TR_HIST_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_CBS_TR_HIST_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_TR_HIST, FSXCOMP_FSXLOG_CBS_TR_HIST_FSI,
                           FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_CBS_TR_HIST_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_CBS_TR_HIST_FSI]

//>> PREP_[FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_CBS_TR_HIST, FSXCOMP_FSXLOG_CBS_TR_HIST_FSI,
                           FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_CBS_TR_HIST_FSI_BYTE]


//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO]


//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_14_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_14_MDA_M1B_DATA_AREA_14]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO]


//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_5_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_5_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_5_MDA_M1B_DATA_AREA_5]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW]


//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3]

//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_3_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_3_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_3_MDA_M2A_DATA_AREA_3]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO]


//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_10_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_10_MDA_M2B_DATA_AREA_10]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO]


//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_9_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_9_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_9_MDA_M2B_DATA_AREA_9]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B,
           FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_1_HEADER_COMMAND_0_B_M1HC0B_MAILBOX_1_HEADER_COMMAND_0_B]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_FSI_BYTE, FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A,
           FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_2_HEADER_COMMAND_0_A_M2HC0A_MAILBOX_2_HEADER_COMMAND_0_A]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_ABORT_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_DOORBELL_ERROR_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_XDN_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI0,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_INTERRUPT_MASK_1_LBUS_SLAVE_B_PENDING_MAILBOX_1]

//>> PREP_[FSXCOMP_FSXLOG_RCS_EL2_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_RCS_EL2_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL2_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_RCS_EL2_FSI]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL2_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_RCS_EL2_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL2_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_RCS_EL2_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL2_FSI]

//>> PUT_[FSXCOMP_FSXLOG_RCS_EL2_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_RCS_EL2_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL2_FSI, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL2_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_RCS_EL2_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_RCS_EL2_FSI]

//>> PREP_[FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL2_FSI, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL2_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_RCS_EL2_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_RCS_EL2_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL2_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_RCS_EL2_RO]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL2_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_RCS_EL2_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_RCS_EL2_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_RCS_EL2_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL2_RO]

//>> PUT_[FSXCOMP_FSXLOG_RCS_EL2_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_RCS_EL2_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL2_FSI, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL2_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_RCS_EL2_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_RCS_EL2_RO]


//>> SET_[FSXCOMP_FSXLOG_RCS_EL2_SNS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL2_SNS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL2_FSI, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL2_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL2_SNS,
           FSXCOMP_FSXLOG_RCS_EL2_SNS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL2_SNS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL2_SNS]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL2_SNS]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL2_SNS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL2_FSI, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL2_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL2_SNS,
           FSXCOMP_FSXLOG_RCS_EL2_SNS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL2_SNS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL2_SNS]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL2_SNS]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_RCS_EL2_SNS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL2_FSI, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL2_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_RCS_EL2_SNS,
           FSXCOMP_FSXLOG_RCS_EL2_SNS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL2_SNS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL2_SNS]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL2_ERR]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL2_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL2_FSI, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL2_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL2_ERR,
           FSXCOMP_FSXLOG_RCS_EL2_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL2_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL2_ERR]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL2_ERR]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL2_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL2_FSI, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL2_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL2_ERR,
           FSXCOMP_FSXLOG_RCS_EL2_ERR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL2_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL2_ERR]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL2_ERR]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_RCS_EL2_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL2_FSI, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL2_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_RCS_EL2_ERR,
           FSXCOMP_FSXLOG_RCS_EL2_ERR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL2_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL2_ERR]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL2_TIME]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL2_TIME(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL2_FSI, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL2_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL2_TIME,
           FSXCOMP_FSXLOG_RCS_EL2_TIME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL2_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL2_TIME]

//>> SET_[FSXCOMP_FSXLOG_RCS_EL2_TIME]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_RCS_EL2_TIME(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL2_FSI, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL2_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_RCS_EL2_TIME,
           FSXCOMP_FSXLOG_RCS_EL2_TIME_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL2_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_RCS_EL2_TIME]

//>> GET_[FSXCOMP_FSXLOG_RCS_EL2_TIME]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_RCS_EL2_TIME(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_RCS_EL2_FSI, FSXCOMP_FSXLOG_RCS_EL2_FSI_BYTE, FSXCOMP_FSXLOG_RCS_EL2_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_RCS_EL2_TIME,
           FSXCOMP_FSXLOG_RCS_EL2_TIME_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_RCS_EL2_TIME chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_RCS_EL2_TIME]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW]


//>> SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11]

//>> SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_11_SR_SCRATCH_REGISTER_11]

//>> PREP_[FSXCOMP_FSXLOG_SNS2LTH_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SNS2LTH_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SNS2LTH_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SNS2LTH_FSI]

//>> GET_[FSXCOMP_FSXLOG_SNS2LTH_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SNS2LTH_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SNS2LTH_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SNS2LTH_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SNS2LTH_FSI]

//>> PUT_[FSXCOMP_FSXLOG_SNS2LTH_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SNS2LTH_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SNS2LTH_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SNS2LTH_FSI]

//>> PREP_[FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_SNS2LTH_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SNS2LTH_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SNS2LTH_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SNS2LTH_RO]

//>> GET_[FSXCOMP_FSXLOG_SNS2LTH_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SNS2LTH_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SNS2LTH_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SNS2LTH_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SNS2LTH_RO]

//>> PUT_[FSXCOMP_FSXLOG_SNS2LTH_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SNS2LTH_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SNS2LTH_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SNS2LTH_RO]


//>> SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A,
           FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A]

//>> SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A,
           FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A]

//>> GET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A,
           FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_A]

//>> SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B,
           FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B]

//>> SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B,
           FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B]

//>> GET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B,
           FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_OUT_B]

//>> SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A]

//>> SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A]

//>> SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A]

//>> CLEAR_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A]

//>> GET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A]

//>> GET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A]
static inline bool GET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_A]

//>> SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B]

//>> SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B]

//>> SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B]

//>> CLEAR_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B]

//>> GET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B]

//>> GET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B]
static inline bool GET_FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SNS2LTH_UP_DWN_MUX_CNTL_B]

//>> SET_[FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63,
           FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63]

//>> SET_[FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63,
           FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63]

//>> GET_[FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SNS2LTH_FSI, FSXCOMP_FSXLOG_SNS2LTH_FSI_BYTE, FSXCOMP_FSXLOG_SNS2LTH_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63,
           FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SNS2LTH_TPFSI_RCS_SENSE_DC_32_63]

//>> PREP_[HOSTATTN_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_HOSTATTN_UNMASKED(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HOSTATTN_UNMASKED;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[HOSTATTN_UNMASKED]

//>> GET_[HOSTATTN_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_HOSTATTN_UNMASKED(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = HOSTATTN_UNMASKED;
#endif
    return fapi2::getScom(i_target, HOSTATTN_UNMASKED, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[HOSTATTN_UNMASKED]

//>> PUT_[HOSTATTN_UNMASKED]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_HOSTATTN_UNMASKED(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(HOSTATTN_UNMASKED));
#endif
    return fapi2::putScom(i_target, HOSTATTN_UNMASKED, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[HOSTATTN_UNMASKED]


//>> SET_[HOSTATTN_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_UNMASKED));
#endif
    return o_data.insertFromRight<HOSTATTN_UNMASKED_IN,
           HOSTATTN_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access HOSTATTN_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_UNMASKED_IN]

//>> SET_[HOSTATTN_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& SET_HOSTATTN_UNMASKED_IN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_UNMASKED));
#endif
    return o_data.insertFromRight<HOSTATTN_UNMASKED_IN,
           HOSTATTN_UNMASKED_IN_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access HOSTATTN_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[HOSTATTN_UNMASKED_IN]

//>> GET_[HOSTATTN_UNMASKED_IN]
static inline fapi2::buffer<uint64_t>& GET_HOSTATTN_UNMASKED_IN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(HOSTATTN_UNMASKED));
#endif
    return i_data.extractToRight<HOSTATTN_UNMASKED_IN,
           HOSTATTN_UNMASKED_IN_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access HOSTATTN_UNMASKED_IN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[HOSTATTN_UNMASKED_IN]

//>> PREP_[L3TRA1_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR0_CONFIG_9]

//>> GET_[L3TRA1_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_CONFIG_9;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR0_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9]

//>> PUT_[L3TRA1_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR0_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR0_CONFIG_9]


//>> SET_[L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL,
           L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL,
           L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL,
           L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL,
           L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL,
           L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL,
           L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL,
           L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL,
           L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL,
           L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL,
           L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL,
           L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL,
           L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK,
           L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK,
           L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK,
           L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK,
           L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK,
           L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK,
           L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK,
           L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK,
           L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK,
           L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK,
           L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK,
           L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK,
           L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE,
           L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE,
           L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE,
           L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA1_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_SPARE_LT]

//>> SET_[L3TRA1_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_SPARE_LT]

//>> SET_[L3TRA1_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA1_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_9_SPARE_LT]

//>> CLEAR_[L3TRA1_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA1_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR0_CONFIG_9_SPARE_LT]

//>> GET_[L3TRA1_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_SPARE_LT]

//>> GET_[L3TRA1_TR0_CONFIG_9_SPARE_LT]
static inline bool GET_L3TRA1_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA1_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access L3TRA1_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_9_SPARE_LT]

//>> PREP_[L3TRA1_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR1_CONFIG_0]

//>> GET_[L3TRA1_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG_0;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR1_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_0]

//>> PUT_[L3TRA1_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_0));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR1_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR1_CONFIG_0]


//>> SET_[L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_0));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[L3TRA3_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR0_CONFIG_1]

//>> GET_[L3TRA3_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_CONFIG_1;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR0_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_1]

//>> PUT_[L3TRA3_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_1));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR0_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR0_CONFIG_1]


//>> SET_[L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_1));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[MULTICAST_GROUP_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_MULTICAST_GROUP_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[MULTICAST_GROUP_4]

//>> GET_[MULTICAST_GROUP_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_MULTICAST_GROUP_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = MULTICAST_GROUP_4;
#endif
    return fapi2::getScom(i_target, MULTICAST_GROUP_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[MULTICAST_GROUP_4]

//>> PUT_[MULTICAST_GROUP_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_MULTICAST_GROUP_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_4));
#endif
    return fapi2::putScom(i_target, MULTICAST_GROUP_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[MULTICAST_GROUP_4]


//>> SET_[MULTICAST_GROUP_4_MULTICAST4_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_4_MULTICAST4_GROUP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_4));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_4_MULTICAST4_GROUP,
           MULTICAST_GROUP_4_MULTICAST4_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access MULTICAST_GROUP_4_MULTICAST4_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_4_MULTICAST4_GROUP]

//>> SET_[MULTICAST_GROUP_4_MULTICAST4_GROUP]
static inline fapi2::buffer<uint64_t>& SET_MULTICAST_GROUP_4_MULTICAST4_GROUP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_4));
#endif
    return o_data.insertFromRight<MULTICAST_GROUP_4_MULTICAST4_GROUP,
           MULTICAST_GROUP_4_MULTICAST4_GROUP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access MULTICAST_GROUP_4_MULTICAST4_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[MULTICAST_GROUP_4_MULTICAST4_GROUP]

//>> GET_[MULTICAST_GROUP_4_MULTICAST4_GROUP]
static inline fapi2::buffer<uint64_t>& GET_MULTICAST_GROUP_4_MULTICAST4_GROUP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(MULTICAST_GROUP_4));
#endif
    return i_data.extractToRight<MULTICAST_GROUP_4_MULTICAST4_GROUP,
           MULTICAST_GROUP_4_MULTICAST4_GROUP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access MULTICAST_GROUP_4_MULTICAST4_GROUP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[MULTICAST_GROUP_4_MULTICAST4_GROUP]

//>> PREP_[OTPC_M_MEASURE_REG14]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_MEASURE_REG14(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG14;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_MEASURE_REG14]

//>> GET_[OTPC_M_MEASURE_REG14]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_MEASURE_REG14(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG14;
#endif
    return fapi2::getScom(i_target, OTPC_M_MEASURE_REG14, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG14]

//>> PUT_[OTPC_M_MEASURE_REG14]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_MEASURE_REG14(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG14));
#endif
    return fapi2::putScom(i_target, OTPC_M_MEASURE_REG14, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_MEASURE_REG14]


//>> SET_[OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG14));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA,
           OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA]

//>> SET_[OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG14));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA,
           OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA]

//>> GET_[OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG14));
#endif
    return i_data.extractToRight<OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA,
           OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG14_SEEPROM_MEASUREMENT14_DATA]

//>> PREP_[PRE_COUNTER_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PRE_COUNTER_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PRE_COUNTER_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PRE_COUNTER_REG]

//>> GET_[PRE_COUNTER_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PRE_COUNTER_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PRE_COUNTER_REG;
#endif
    return fapi2::getScom(i_target, PRE_COUNTER_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PRE_COUNTER_REG]

//>> PUT_[PRE_COUNTER_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PRE_COUNTER_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PRE_COUNTER_REG));
#endif
    return fapi2::putScom(i_target, PRE_COUNTER_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PRE_COUNTER_REG]


//>> SET_[PRE_COUNTER_REG_PRE_COUNTER]
static inline fapi2::buffer<uint64_t>& SET_PRE_COUNTER_REG_PRE_COUNTER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRE_COUNTER_REG));
#endif
    return o_data.insertFromRight<PRE_COUNTER_REG_PRE_COUNTER,
           PRE_COUNTER_REG_PRE_COUNTER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access PRE_COUNTER_REG_PRE_COUNTER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PRE_COUNTER_REG_PRE_COUNTER]

//>> SET_[PRE_COUNTER_REG_PRE_COUNTER]
static inline fapi2::buffer<uint64_t>& SET_PRE_COUNTER_REG_PRE_COUNTER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRE_COUNTER_REG));
#endif
    return o_data.insertFromRight<PRE_COUNTER_REG_PRE_COUNTER,
           PRE_COUNTER_REG_PRE_COUNTER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access PRE_COUNTER_REG_PRE_COUNTER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PRE_COUNTER_REG_PRE_COUNTER]

//>> GET_[PRE_COUNTER_REG_PRE_COUNTER]
static inline fapi2::buffer<uint64_t>& GET_PRE_COUNTER_REG_PRE_COUNTER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRE_COUNTER_REG));
#endif
    return i_data.extractToRight<PRE_COUNTER_REG_PRE_COUNTER,
           PRE_COUNTER_REG_PRE_COUNTER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access PRE_COUNTER_REG_PRE_COUNTER chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PRE_COUNTER_REG_PRE_COUNTER]

//>> PREP_[REC_ERR_MST2_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST2_REG1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST2_REG1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST2_REG1]

//>> GET_[REC_ERR_MST2_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST2_REG1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST2_REG1;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST2_REG1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST2_REG1]

//>> PUT_[REC_ERR_MST2_REG1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST2_REG1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST2_REG1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST2_REG1]


//>> SET_[REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_16_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_16_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_16_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_16_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_16_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_16_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_16_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_16_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_16_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_16_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_16_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_16_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_16_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_16_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_16_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_16_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_16_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_16_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_16_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_17_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_17_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_17_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_17_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_17_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_17_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_17_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_17_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_17_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_17_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_17_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_17_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_17_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_17_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_17_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_17_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_17_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_17_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_17_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_18_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_18_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_18_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_18_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_18_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_18_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_18_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_18_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_18_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_18_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_18_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_18_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_18_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_18_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_18_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_18_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_18_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_18_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_18_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_19_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_19_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_19_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_19_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_19_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_19_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_19_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_19_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_19_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_19_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_19_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_19_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_19_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_19_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_19_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_19_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_19_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_19_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_19_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_20_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_20_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_20_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_20_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_20_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_20_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_20_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_20_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_20_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_20_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_20_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_20_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_20_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_20_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_20_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_20_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_20_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_20_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_20_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_21_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_21_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_21_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_21_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_21_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_21_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_21_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_21_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_21_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_21_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_21_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_21_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_21_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_21_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_21_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_21_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_21_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_21_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_21_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_22_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_22_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_22_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_22_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_22_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_22_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_22_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_22_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_22_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_22_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_22_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_22_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_22_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_22_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_22_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_22_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_22_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_22_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_22_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_23_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_23_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_23_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_23_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_23_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_23_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_23_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_23_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_23_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_23_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_23_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_23_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_23_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_23_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_23_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_23_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_23_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_23_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_23_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_24_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_24_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_24_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_24_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_24_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_24_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_24_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_24_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_24_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_24_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_24_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_24_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_24_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_24_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_24_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_24_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_24_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_24_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_24_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_25_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_25_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_25_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_25_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_25_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_25_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_25_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_25_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_25_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_25_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_25_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_25_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_25_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_25_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_25_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_25_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_25_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_25_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_25_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_26_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_26_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_26_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_26_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_26_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_26_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_26_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_26_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_26_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_26_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_26_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_26_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_26_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_26_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_26_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_26_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_26_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_26_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_26_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_27_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_27_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_27_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_27_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_27_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_27_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_27_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_27_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_27_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_27_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_27_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_27_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_27_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_27_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_27_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_27_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_27_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_27_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_27_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_28_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_28_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_28_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_28_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_28_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_28_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_28_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_28_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_28_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_28_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_28_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_28_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_28_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_28_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_28_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_28_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_28_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_28_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_28_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_29_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_29_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_29_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_29_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_29_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_29_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_29_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_29_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_29_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_29_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_29_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_29_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_29_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_29_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_29_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_29_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_29_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_29_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_29_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_30_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_30_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_30_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_30_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_30_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_30_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_30_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_30_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_30_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_30_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_30_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_30_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_30_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_30_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_30_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_30_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_30_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_30_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_30_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.setBit<REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.clearBit<REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT]

//>> GET_[REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.getBit<REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_31_MST2_RESPONSE_BIT]

//>> SET_[REC_ERR_MST2_REG1_31_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_31_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_31_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_31_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST2_REG1_31_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_31_MST2_ERROR_CODE]

//>> SET_[REC_ERR_MST2_REG1_31_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST2_REG1_31_MST2_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return o_data.insertFromRight<REC_ERR_MST2_REG1_31_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_31_MST2_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST2_REG1_31_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST2_REG1_31_MST2_ERROR_CODE]

//>> GET_[REC_ERR_MST2_REG1_31_MST2_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST2_REG1_31_MST2_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST2_REG1));
#endif
    return i_data.extractToRight<REC_ERR_MST2_REG1_31_MST2_ERROR_CODE,
           REC_ERR_MST2_REG1_31_MST2_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST2_REG1_31_MST2_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST2_REG1_31_MST2_ERROR_CODE]

//>> PREP_[REC_ERR_MST6_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST6_REG0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST6_REG0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST6_REG0]

//>> GET_[REC_ERR_MST6_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST6_REG0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST6_REG0;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST6_REG0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST6_REG0]

//>> PUT_[REC_ERR_MST6_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST6_REG0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST6_REG0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST6_REG0]


//>> SET_[REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_MASTER_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_MASTER_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE1_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE1_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE2_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE2_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE3_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE3_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE4_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE4_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE5_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE5_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE6_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE6_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE7_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE7_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE8_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE8_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE9_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE9_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE10_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE10_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE11_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE11_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE12_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE12_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE13_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE13_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE14_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE14_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.setBit<REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT]

//>> GET_[REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.getBit<REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE15_MST6_RESPONSE_BIT]

//>> SET_[REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE]

//>> SET_[REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE]

//>> GET_[REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST6_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE,
           REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST6_REG0_SLAVE15_MST6_ERROR_CODE]

//>> PREP_[REC_ERR_MST8_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST8_REG0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST8_REG0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST8_REG0]

//>> GET_[REC_ERR_MST8_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST8_REG0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST8_REG0;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST8_REG0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST8_REG0]

//>> PUT_[REC_ERR_MST8_REG0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST8_REG0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST8_REG0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST8_REG0]


//>> SET_[REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_MASTER_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_MASTER_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE1_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE1_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE2_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE2_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE3_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE3_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE4_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE4_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE5_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE5_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE6_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE6_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE7_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE7_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE8_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE8_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE9_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE9_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE10_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE10_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE11_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE11_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE12_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE12_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE13_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE13_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE14_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE14_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.setBit<REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.clearBit<REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT]

//>> GET_[REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.getBit<REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE15_MST8_RESPONSE_BIT]

//>> SET_[REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE]

//>> SET_[REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return o_data.insertFromRight<REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE]

//>> GET_[REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST8_REG0));
#endif
    return i_data.extractToRight<REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE,
           REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST8_REG0_SLAVE15_MST8_ERROR_CODE]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG112]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG112(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG112;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG112]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG112]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG112(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG112;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG112, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG112]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG112]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG112(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG112));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG112, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG112]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG112));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112,
           SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG112));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112,
           SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG112));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112,
           SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG112_REGISTER112]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG125]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG125(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG125;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG125]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG125]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG125(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG125;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG125, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG125]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG125]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG125(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG125));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG125, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG125]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG125));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125,
           SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG125));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125,
           SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG125));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125,
           SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG125_REGISTER125]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG34]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG34(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG34;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG34]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG34]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG34(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG34;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG34, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG34]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG34]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG34(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG34));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG34, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG34]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG34));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34,
           SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG34));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34,
           SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG34));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34,
           SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG34_REGISTER34]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
