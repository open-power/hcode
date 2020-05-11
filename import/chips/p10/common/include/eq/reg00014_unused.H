/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/eq/reg00014_unused.H $        */
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

#ifndef __EQ_REG00014_H_UNUSED__
#define __EQ_REG00014_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace eq
{
#endif


//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_PDLYS_CORE_PDLYS_INVERT]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CORE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1,
           CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1,
           CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1,
           CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_1]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2,
           CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2,
           CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2,
           CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_MEASURE_HISTORY_2]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_ADJUST_MODE_SET_ADJUST_MD]

//>> PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE]

//>> PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE]


//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]

//>> SET_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]

//>> CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]

//>> GET_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]
static inline bool GET_CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_DCADJ_WRAP_SET_HOLD_MODE_SET_HOLD_MD]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE,
           CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_WAIT_CNT_WAIT_CNT_VALUE]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE,
           CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_DCC_OVERRIDE_VALUE]

//>> PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]

//>> PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE]


//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> SET_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> GET_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]
static inline bool GET_CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_DCADJ_WRAP_SET_MEASURE_ONLY_MODE_SET_MEASURE_ONLY_MD_SET1]

//>> PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]

//>> PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE]


//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_SINGLE_STEP_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ONE_SHOT_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_ADJUST_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_HOLD_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.insertFromRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.setBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return o_data.clearBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.extractToRight<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]
static inline bool GET_CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE));
#endif
    return i_data.getBit<CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_03_SKEW_WRAP_SKEWADJ_SET_HOLD_MODE_INIT_MD_SET]

//>> PREP_[QMETRA0_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_TRACE_LO_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR1_TRACE_LO_DATA_REG]

//>> GET_[QMETRA0_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_TRACE_LO_DATA_REG;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR1_TRACE_LO_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_LO_DATA_REG]

//>> PUT_[QMETRA0_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR1_TRACE_LO_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR1_TRACE_LO_DATA_REG]


//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA,
           QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA,
           QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA,
           QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS,
           QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS,
           QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS,
           QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> CLEAR_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline bool GET_QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> CLEAR_[QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline bool GET_QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> CLEAR_[QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline bool GET_QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> PREP_[QMETRA0_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR1_CONFIG]

//>> GET_[QMETRA0_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_CONFIG;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR1_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG]

//>> PUT_[QMETRA0_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR1_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR1_CONFIG]


//>> SET_[QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> CLEAR_[QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline bool GET_QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> CLEAR_[QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline bool GET_QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE,
           QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE,
           QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> GET_[QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE,
           QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_BANK_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_BANK_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_BANK_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_BANK_MODE]

//>> CLEAR_[QMETRA0_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_CONFIG_BANK_MODE]

//>> GET_[QMETRA0_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_BANK_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_BANK_MODE]

//>> GET_[QMETRA0_TR1_CONFIG_BANK_MODE]
static inline bool GET_QMETRA0_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_BANK_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_ENH_TRACE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_ENH_TRACE_MODE]

//>> CLEAR_[QMETRA0_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_CONFIG_ENH_TRACE_MODE]

//>> GET_[QMETRA0_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_ENH_TRACE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_ENH_TRACE_MODE]

//>> GET_[QMETRA0_TR1_CONFIG_ENH_TRACE_MODE]
static inline bool GET_QMETRA0_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> GET_[QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL,
           QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL,
           QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> GET_[QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL,
           QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> CLEAR_[QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline bool GET_QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS]

//>> CLEAR_[QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS]

//>> GET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS]

//>> GET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS]
static inline bool GET_QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY]

//>> CLEAR_[QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY]

//>> GET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY]

//>> GET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY]
static inline bool GET_QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> CLEAR_[QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline bool GET_QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> CLEAR_[QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline bool GET_QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.setBit<QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> CLEAR_[QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& CLEAR_QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return o_data.clearBit<QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline bool GET_QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG));
#endif
    return i_data.getBit<QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> PREP_[QME_LFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIR_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIR_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_LFIR_WO_AND]

//>> GET_[QME_LFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIR_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIR_WO_AND;
#endif
    return fapi2::getScom(i_target, QME_LFIR_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_LFIR_WO_AND]

//>> PUT_[QME_LFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIR_WO_AND(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_LFIR_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_LFIR_WO_AND]

//>> PREP_[QME_LFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_LFIR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_LFIR_WO_OR]

//>> GET_[QME_LFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_LFIR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_LFIR_WO_OR;
#endif
    return fapi2::getScom(i_target, QME_LFIR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_LFIR_WO_OR]

//>> PUT_[QME_LFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_LFIR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_LFIR_RW, QME_LFIR_WO_AND, QME_LFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, QME_LFIR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_LFIR_WO_OR]


//>> PREP_[QME_PCBSII]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QME_PCBSII(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PCBSII;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QME_PCBSII]

//>> GET_[QME_PCBSII]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QME_PCBSII(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QME_PCBSII;
#endif
    return fapi2::getScom(i_target, QME_PCBSII, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QME_PCBSII]

//>> PUT_[QME_PCBSII]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QME_PCBSII(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return fapi2::putScom(i_target, QME_PCBSII, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QME_PCBSII]


//>> SET_[QME_PCBSII_PCB_REQ_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_REQ_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_REQ_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSII_PCB_REQ_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_REQ_ACK]

//>> SET_[QME_PCBSII_PCB_REQ_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_REQ_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_REQ_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSII_PCB_REQ_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_REQ_ACK]

//>> SET_[QME_PCBSII_PCB_REQ_ACK]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_REQ_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.setBit<QME_PCBSII_PCB_REQ_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QME_PCBSII_PCB_REQ_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_REQ_ACK]

//>> CLEAR_[QME_PCBSII_PCB_REQ_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSII_PCB_REQ_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.clearBit<QME_PCBSII_PCB_REQ_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QME_PCBSII_PCB_REQ_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSII_PCB_REQ_ACK]

//>> GET_[QME_PCBSII_PCB_REQ_ACK]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSII_PCB_REQ_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.extractToRight<QME_PCBSII_PCB_REQ_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSII_PCB_REQ_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_REQ_ACK]

//>> GET_[QME_PCBSII_PCB_REQ_ACK]
static inline bool GET_QME_PCBSII_PCB_REQ_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.getBit<QME_PCBSII_PCB_REQ_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QME_PCBSII_PCB_REQ_ACK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_REQ_ACK]

//>> SET_[QME_PCBSII_PCB_RSP_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_P(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_RSP_P,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_P]

//>> SET_[QME_PCBSII_PCB_RSP_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_P(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_RSP_P,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_P]

//>> SET_[QME_PCBSII_PCB_RSP_P]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_P(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.setBit<QME_PCBSII_PCB_RSP_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_P]

//>> CLEAR_[QME_PCBSII_PCB_RSP_P]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSII_PCB_RSP_P(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.clearBit<QME_PCBSII_PCB_RSP_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSII_PCB_RSP_P]

//>> GET_[QME_PCBSII_PCB_RSP_P]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSII_PCB_RSP_P(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.extractToRight<QME_PCBSII_PCB_RSP_P,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_RSP_P]

//>> GET_[QME_PCBSII_PCB_RSP_P]
static inline bool GET_QME_PCBSII_PCB_RSP_P(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.getBit<QME_PCBSII_PCB_RSP_P>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_P chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_RSP_P]

//>> SET_[QME_PCBSII_PCB_RSP_VLD]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_VLD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_RSP_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_VLD]

//>> SET_[QME_PCBSII_PCB_RSP_VLD]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_VLD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_RSP_VLD,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_VLD]

//>> SET_[QME_PCBSII_PCB_RSP_VLD]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.setBit<QME_PCBSII_PCB_RSP_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_VLD]

//>> CLEAR_[QME_PCBSII_PCB_RSP_VLD]
static inline fapi2::buffer<uint64_t>& CLEAR_QME_PCBSII_PCB_RSP_VLD(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.clearBit<QME_PCBSII_PCB_RSP_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[QME_PCBSII_PCB_RSP_VLD]

//>> GET_[QME_PCBSII_PCB_RSP_VLD]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSII_PCB_RSP_VLD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.extractToRight<QME_PCBSII_PCB_RSP_VLD,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_RSP_VLD]

//>> GET_[QME_PCBSII_PCB_RSP_VLD]
static inline bool GET_QME_PCBSII_PCB_RSP_VLD(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.getBit<QME_PCBSII_PCB_RSP_VLD>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_VLD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_RSP_VLD]

//>> SET_[QME_PCBSII_PCB_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_INFO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_RSP_INFO,
           QME_PCBSII_PCB_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_INFO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_INFO]

//>> SET_[QME_PCBSII_PCB_RSP_INFO]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_PCB_RSP_INFO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_PCB_RSP_INFO,
           QME_PCBSII_PCB_RSP_INFO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_INFO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_PCB_RSP_INFO]

//>> GET_[QME_PCBSII_PCB_RSP_INFO]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSII_PCB_RSP_INFO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.extractToRight<QME_PCBSII_PCB_RSP_INFO,
           QME_PCBSII_PCB_RSP_INFO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSII_PCB_RSP_INFO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_PCB_RSP_INFO]

//>> SET_[QME_PCBSII_QUAD_ID]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_QUAD_ID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_QUAD_ID,
           QME_PCBSII_QUAD_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access QME_PCBSII_QUAD_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_QUAD_ID]

//>> SET_[QME_PCBSII_QUAD_ID]
static inline fapi2::buffer<uint64_t>& SET_QME_PCBSII_QUAD_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return o_data.insertFromRight<QME_PCBSII_QUAD_ID,
           QME_PCBSII_QUAD_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access QME_PCBSII_QUAD_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QME_PCBSII_QUAD_ID]

//>> GET_[QME_PCBSII_QUAD_ID]
static inline fapi2::buffer<uint64_t>& GET_QME_PCBSII_QUAD_ID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QME_PCBSII));
#endif
    return i_data.extractToRight<QME_PCBSII_QUAD_ID,
           QME_PCBSII_QUAD_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access QME_PCBSII_QUAD_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QME_PCBSII_QUAD_ID]

//>> PREP_[EPS_DBG_TRACE_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_TRACE_REG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_REG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_TRACE_REG_1]

//>> GET_[EPS_DBG_TRACE_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_TRACE_REG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_REG_1;
#endif
    return fapi2::getScom(i_target, EPS_DBG_TRACE_REG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1]

//>> PUT_[EPS_DBG_TRACE_REG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_TRACE_REG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return fapi2::putScom(i_target, EPS_DBG_TRACE_REG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_TRACE_REG_1]


//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO,
           EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]
static inline bool GET_EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT,
           EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.setBit<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> CLEAR_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]
static inline bool GET_EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_REG_1));
#endif
    return i_data.getBit<EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> PREP_[L3TRA0_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR0_CONFIG]

//>> GET_[L3TRA0_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR0_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG]

//>> PUT_[L3TRA0_TR0_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR0_CONFIG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR0_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR0_CONFIG]


//>> SET_[L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> CLEAR_[L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]
static inline bool GET_L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> CLEAR_[L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]
static inline bool GET_L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE,
           L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE,
           L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> GET_[L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE,
           L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_BANK_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_BANK_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_BANK_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_BANK_MODE]

//>> CLEAR_[L3TRA0_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_CONFIG_BANK_MODE]

//>> GET_[L3TRA0_TR0_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_BANK_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_BANK_MODE]

//>> GET_[L3TRA0_TR0_CONFIG_BANK_MODE]
static inline bool GET_L3TRA0_TR0_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR0_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_BANK_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_ENH_TRACE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_ENH_TRACE_MODE]

//>> CLEAR_[L3TRA0_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_CONFIG_ENH_TRACE_MODE]

//>> GET_[L3TRA0_TR0_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_ENH_TRACE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_ENH_TRACE_MODE]

//>> GET_[L3TRA0_TR0_CONFIG_ENH_TRACE_MODE]
static inline bool GET_L3TRA0_TR0_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR0_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> GET_[L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> GET_[L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> CLEAR_[L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]
static inline bool GET_L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS]

//>> CLEAR_[L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS]
static inline bool GET_L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY]

//>> CLEAR_[L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY]
static inline bool GET_L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> CLEAR_[L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline bool GET_L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> CLEAR_[L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline bool GET_L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.setBit<L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> CLEAR_[L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return o_data.clearBit<L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline bool GET_L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG));
#endif
    return i_data.getBit<L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> PREP_[L3TRA1_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR0_TRACE_HI_DATA_REG]

//>> GET_[L3TRA1_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR0_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_HI_DATA_REG]

//>> PUT_[L3TRA1_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR0_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR0_TRACE_HI_DATA_REG]


//>> SET_[L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[L3TRA1_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_CONFIG_1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR0_CONFIG_1]

//>> GET_[L3TRA1_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR0_CONFIG_1;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR0_CONFIG_1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_1]

//>> PUT_[L3TRA1_TR0_CONFIG_1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR0_CONFIG_1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_1));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR0_CONFIG_1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR0_CONFIG_1]


//>> SET_[L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> SET_[L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_1));
#endif
    return o_data.insertFromRight<L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> GET_[L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR0_CONFIG_1));
#endif
    return i_data.extractToRight<L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87,
           L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR0_CONFIG_1_CMP_MSK_LT_B_64_TO_87]

//>> PREP_[L3TRA1_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR1_CONFIG]

//>> GET_[L3TRA1_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR1_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG]

//>> PUT_[L3TRA1_TR1_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR1_CONFIG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR1_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR1_CONFIG]


//>> SET_[L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> CLEAR_[L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE]
static inline bool GET_L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_STORE_ON_TRIG_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> CLEAR_[L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE]
static inline bool GET_L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_WRITE_ON_RUN_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE,
           L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE,
           L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE,
           L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_EXTEND_TRIG_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_BANK_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_BANK_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_BANK_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_BANK_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_BANK_MODE]

//>> CLEAR_[L3TRA1_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_BANK_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_BANK_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_BANK_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_BANK_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_BANK_MODE]
static inline bool GET_L3TRA1_TR1_CONFIG_BANK_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_BANK_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_BANK_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_BANK_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_ENH_TRACE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_ENH_TRACE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_ENH_TRACE_MODE]

//>> CLEAR_[L3TRA1_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_ENH_TRACE_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_ENH_TRACE_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_ENH_TRACE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_ENH_TRACE_MODE]

//>> GET_[L3TRA1_TR1_CONFIG_ENH_TRACE_MODE]
static inline bool GET_L3TRA1_TR1_CONFIG_ENH_TRACE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_ENH_TRACE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_ENH_TRACE_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_ENH_TRACE_MODE]

//>> SET_[L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> GET_[L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL,
           L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_LOCAL_CLOCK_GATE_CONTROL]

//>> SET_[L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> GET_[L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL,
           L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_TRACE_SELECT_CONTROL]

//>> SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> CLEAR_[L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> GET_[L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF]
static inline bool GET_L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_TRACE_RUN_HOLD_OFF]

//>> SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS]

//>> CLEAR_[L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS]

//>> GET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS]
static inline bool GET_L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STATUS]

//>> SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY]

//>> CLEAR_[L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY]

//>> GET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY]
static inline bool GET_L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_TRACE_RUN_STICKY]

//>> SET_[L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> CLEAR_[L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> GET_[L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]
static inline bool GET_L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_DISABLE_BANK_EDGE_DETECT]

//>> SET_[L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> CLEAR_[L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> GET_[L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]
static inline bool GET_L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_DISABLE_SCOM_TRCTRL_TRARR_RD_ACT]

//>> SET_[L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> SET_[L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.setBit<L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> CLEAR_[L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return o_data.clearBit<L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> GET_[L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]
static inline bool GET_L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG));
#endif
    return i_data.getBit<L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_MASTER_CLOCK_ENABLE_INT]

//>> PREP_[L3TRA2_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_TRACE_LO_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR1_TRACE_LO_DATA_REG]

//>> GET_[L3TRA2_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_TRACE_LO_DATA_REG;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR1_TRACE_LO_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_LO_DATA_REG]

//>> PUT_[L3TRA2_TR1_TRACE_LO_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR1_TRACE_LO_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR1_TRACE_LO_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR1_TRACE_LO_DATA_REG]


//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA,
           L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LO_DATA]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS,
           L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_ADDRESS]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK,
           L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> CLEAR_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]
static inline bool GET_L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_LAST_BANK_VALID]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> CLEAR_[L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]
static inline bool GET_L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_WRITE_ON_RUN]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.setBit<L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> CLEAR_[L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.clearBit<L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING]
static inline bool GET_L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.getBit<L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_RUNNING]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_TRACE_LO_DATA_REG));
#endif
    return i_data.extractToRight<L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS,
           L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_TRACE_LO_DATA_REG_HOLD_ADDRESS]

//>> PREP_[L3TRA3_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR0_CONFIG_9]

//>> GET_[L3TRA3_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_CONFIG_9;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR0_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9]

//>> PUT_[L3TRA3_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR0_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR0_CONFIG_9]


//>> SET_[L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL,
           L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL,
           L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL,
           L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL,
           L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL,
           L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL,
           L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL,
           L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL,
           L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL,
           L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL,
           L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL,
           L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL,
           L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK,
           L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK,
           L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK,
           L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK,
           L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK,
           L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK,
           L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK,
           L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK,
           L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK,
           L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK,
           L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK,
           L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK,
           L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE,
           L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE,
           L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE,
           L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[L3TRA3_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_SPARE_LT]

//>> SET_[L3TRA3_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_SPARE_LT]

//>> SET_[L3TRA3_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.setBit<L3TRA3_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_9_SPARE_LT]

//>> CLEAR_[L3TRA3_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_L3TRA3_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return o_data.clearBit<L3TRA3_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[L3TRA3_TR0_CONFIG_9_SPARE_LT]

//>> GET_[L3TRA3_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_SPARE_LT]

//>> GET_[L3TRA3_TR0_CONFIG_9_SPARE_LT]
static inline bool GET_L3TRA3_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_9));
#endif
    return i_data.getBit<L3TRA3_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access L3TRA3_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_9_SPARE_LT]

//>> PREP_[L3TRA3_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR1_CONFIG_0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR1_CONFIG_0]

//>> GET_[L3TRA3_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR1_CONFIG_0;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR1_CONFIG_0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_0]

//>> PUT_[L3TRA3_TR1_CONFIG_0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR1_CONFIG_0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_0));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR1_CONFIG_0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR1_CONFIG_0]


//>> SET_[L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> SET_[L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_0));
#endif
    return o_data.insertFromRight<L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> GET_[L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR1_CONFIG_0));
#endif
    return i_data.extractToRight<L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63,
           L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR1_CONFIG_0_CMP_MSK_LT_B_0_TO_63]

//>> PREP_[XSTOP2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_XSTOP2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[XSTOP2]

//>> GET_[XSTOP2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_XSTOP2(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP2;
#endif
    return fapi2::getScom(i_target, XSTOP2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[XSTOP2]

//>> PUT_[XSTOP2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_XSTOP2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return fapi2::putScom(i_target, XSTOP2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[XSTOP2]


//>> SET_[XSTOP2_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_ENABLE]

//>> SET_[XSTOP2_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_ENABLE]

//>> SET_[XSTOP2_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_ENABLE]

//>> CLEAR_[XSTOP2_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_ENABLE]

//>> GET_[XSTOP2_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_ENABLE]

//>> GET_[XSTOP2_ENABLE]
static inline bool GET_XSTOP2_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_ENABLE]

//>> SET_[XSTOP2_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_WAIT_SNOPA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_SNOPA]

//>> SET_[XSTOP2_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_SNOPA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_WAIT_SNOPA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_SNOPA]

//>> SET_[XSTOP2_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_SNOPA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_SNOPA]

//>> CLEAR_[XSTOP2_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_WAIT_SNOPA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_WAIT_SNOPA]

//>> GET_[XSTOP2_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_WAIT_SNOPA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_WAIT_SNOPA]

//>> GET_[XSTOP2_WAIT_SNOPA]
static inline bool GET_XSTOP2_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_WAIT_SNOPA]

//>> SET_[XSTOP2_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_TRIGGER_OPCG_GO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_TRIGGER_OPCG_GO]

//>> SET_[XSTOP2_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_TRIGGER_OPCG_GO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_TRIGGER_OPCG_GO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_TRIGGER_OPCG_GO]

//>> SET_[XSTOP2_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_TRIGGER_OPCG_GO]

//>> CLEAR_[XSTOP2_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_TRIGGER_OPCG_GO]

//>> GET_[XSTOP2_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_TRIGGER_OPCG_GO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_TRIGGER_OPCG_GO]

//>> GET_[XSTOP2_TRIGGER_OPCG_GO]
static inline bool GET_XSTOP2_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_TRIGGER_OPCG_GO]

//>> SET_[XSTOP2_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_WAIT_ALWAYS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_ALWAYS]

//>> SET_[XSTOP2_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_ALWAYS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_WAIT_ALWAYS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_ALWAYS]

//>> SET_[XSTOP2_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_ALWAYS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_ALWAYS]

//>> CLEAR_[XSTOP2_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_WAIT_ALWAYS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_WAIT_ALWAYS]

//>> GET_[XSTOP2_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_WAIT_ALWAYS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_WAIT_ALWAYS]

//>> GET_[XSTOP2_WAIT_ALWAYS]
static inline bool GET_XSTOP2_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_WAIT_ALWAYS]

//>> SET_[XSTOP2_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_PERV]

//>> SET_[XSTOP2_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_PERV]

//>> SET_[XSTOP2_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_PERV]

//>> CLEAR_[XSTOP2_REGION_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_PERV]

//>> GET_[XSTOP2_REGION_PERV]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_PERV]

//>> GET_[XSTOP2_REGION_PERV]
static inline bool GET_XSTOP2_REGION_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_PERV]

//>> SET_[XSTOP2_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT1]

//>> SET_[XSTOP2_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT1]

//>> SET_[XSTOP2_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT1]

//>> CLEAR_[XSTOP2_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT1]

//>> GET_[XSTOP2_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT1]

//>> GET_[XSTOP2_REGION_UNIT1]
static inline bool GET_XSTOP2_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT1]

//>> SET_[XSTOP2_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT2]

//>> SET_[XSTOP2_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT2]

//>> SET_[XSTOP2_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT2]

//>> CLEAR_[XSTOP2_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT2]

//>> GET_[XSTOP2_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT2]

//>> GET_[XSTOP2_REGION_UNIT2]
static inline bool GET_XSTOP2_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT2]

//>> SET_[XSTOP2_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT3]

//>> SET_[XSTOP2_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT3]

//>> SET_[XSTOP2_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT3]

//>> CLEAR_[XSTOP2_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT3]

//>> GET_[XSTOP2_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT3]

//>> GET_[XSTOP2_REGION_UNIT3]
static inline bool GET_XSTOP2_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT3]

//>> SET_[XSTOP2_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT4]

//>> SET_[XSTOP2_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT4]

//>> SET_[XSTOP2_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT4]

//>> CLEAR_[XSTOP2_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT4]

//>> GET_[XSTOP2_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT4]

//>> GET_[XSTOP2_REGION_UNIT4]
static inline bool GET_XSTOP2_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT4]

//>> SET_[XSTOP2_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT5]

//>> SET_[XSTOP2_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT5]

//>> SET_[XSTOP2_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT5]

//>> CLEAR_[XSTOP2_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT5]

//>> GET_[XSTOP2_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT5]

//>> GET_[XSTOP2_REGION_UNIT5]
static inline bool GET_XSTOP2_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT5]

//>> SET_[XSTOP2_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT6]

//>> SET_[XSTOP2_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT6]

//>> SET_[XSTOP2_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT6]

//>> CLEAR_[XSTOP2_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT6]

//>> GET_[XSTOP2_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT6]

//>> GET_[XSTOP2_REGION_UNIT6]
static inline bool GET_XSTOP2_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT6]

//>> SET_[XSTOP2_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT7]

//>> SET_[XSTOP2_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT7]

//>> SET_[XSTOP2_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT7]

//>> CLEAR_[XSTOP2_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT7]

//>> GET_[XSTOP2_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT7]

//>> GET_[XSTOP2_REGION_UNIT7]
static inline bool GET_XSTOP2_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT7]

//>> SET_[XSTOP2_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT8]

//>> SET_[XSTOP2_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT8]

//>> SET_[XSTOP2_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT8]

//>> CLEAR_[XSTOP2_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT8]

//>> GET_[XSTOP2_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT8]

//>> GET_[XSTOP2_REGION_UNIT8]
static inline bool GET_XSTOP2_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT8]

//>> SET_[XSTOP2_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT9]

//>> SET_[XSTOP2_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT9]

//>> SET_[XSTOP2_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT9]

//>> CLEAR_[XSTOP2_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT9]

//>> GET_[XSTOP2_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT9]

//>> GET_[XSTOP2_REGION_UNIT9]
static inline bool GET_XSTOP2_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT9]

//>> SET_[XSTOP2_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT10]

//>> SET_[XSTOP2_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT10]

//>> SET_[XSTOP2_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT10]

//>> CLEAR_[XSTOP2_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT10]

//>> GET_[XSTOP2_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT10]

//>> GET_[XSTOP2_REGION_UNIT10]
static inline bool GET_XSTOP2_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT10]

//>> SET_[XSTOP2_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT11]

//>> SET_[XSTOP2_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT11]

//>> SET_[XSTOP2_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT11]

//>> CLEAR_[XSTOP2_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT11]

//>> GET_[XSTOP2_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT11]

//>> GET_[XSTOP2_REGION_UNIT11]
static inline bool GET_XSTOP2_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT11]

//>> SET_[XSTOP2_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT12]

//>> SET_[XSTOP2_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT12]

//>> SET_[XSTOP2_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT12]

//>> CLEAR_[XSTOP2_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT12]

//>> GET_[XSTOP2_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT12]

//>> GET_[XSTOP2_REGION_UNIT12]
static inline bool GET_XSTOP2_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT12]

//>> SET_[XSTOP2_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT13]

//>> SET_[XSTOP2_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT13]

//>> SET_[XSTOP2_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT13]

//>> CLEAR_[XSTOP2_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT13]

//>> GET_[XSTOP2_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT13]

//>> GET_[XSTOP2_REGION_UNIT13]
static inline bool GET_XSTOP2_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT13]

//>> SET_[XSTOP2_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT14]

//>> SET_[XSTOP2_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT14]

//>> SET_[XSTOP2_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.setBit<XSTOP2_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_eq Invalid dial access XSTOP2_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_REGION_UNIT14]

//>> CLEAR_[XSTOP2_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP2_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.clearBit<XSTOP2_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_eq Invalid dial access XSTOP2_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP2_REGION_UNIT14]

//>> GET_[XSTOP2_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_REGION_UNIT14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT14]

//>> GET_[XSTOP2_REGION_UNIT14]
static inline bool GET_XSTOP2_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.getBit<XSTOP2_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_eq Invalid dial access XSTOP2_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_REGION_UNIT14]

//>> SET_[XSTOP2_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_WAIT_CYCLES,
           XSTOP2_WAIT_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_eq Invalid dial access XSTOP2_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_CYCLES]

//>> SET_[XSTOP2_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_XSTOP2_WAIT_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return o_data.insertFromRight<XSTOP2_WAIT_CYCLES,
           XSTOP2_WAIT_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_eq Invalid dial access XSTOP2_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP2_WAIT_CYCLES]

//>> GET_[XSTOP2_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_XSTOP2_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP2));
#endif
    return i_data.extractToRight<XSTOP2_WAIT_CYCLES,
           XSTOP2_WAIT_CYCLES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_eq Invalid dial access XSTOP2_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP2_WAIT_CYCLES]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
