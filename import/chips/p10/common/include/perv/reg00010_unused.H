/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/perv/reg00010_unused.H $      */
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

#ifndef __PERV_REG00010_H_UNUSED__
#define __PERV_REG00010_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace perv
{
#endif


//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE]


//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_ENA]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> CLEAR_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]
static inline bool GET_CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_ENABLE_OVERRIDE_VAL]

//>> PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE]

//>> GET_[CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE]

//>> PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_DCADJ_WRAP_SET_INIT_MODE]


//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_ENABLE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_CORE_OVERRIDE_VALUE]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SET_INVERT_CORE_IS_LATE_CORE_IS_LATE_INVERT]

//>> PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]

//>> PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES]


//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE_STATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE,
           CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE_STATE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_ENABLE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_SYNC_DONE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_ENABLE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_SYNC_DONE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CORE_PDLY_ERR]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_CACHE_PDLY_ERR]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_HOLD_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ADJUST_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SINGLE_STEP_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_INIT_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_MODE_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_ONE_SHOT_ADJUSTED]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.insertFromRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]

//>> SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.setBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]

//>> CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return o_data.clearBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.extractToRight<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]

//>> GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]
static inline bool GET_CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES));
#endif
    return i_data.getBit<CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_00_SKEW_WRAP_SKEWADJ_SYNC_DONE_FSM_STATES_SKEW_ADJ_ACTIVE]

//>> PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]

//>> PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE]


//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>&
CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_ENABLE_OVERRIDE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.insertFromRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.setBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return o_data.clearBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return i_data.extractToRight<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]
static inline bool GET_CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE));
#endif
    return i_data.getBit<CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_01_SKEW_WRAP_SKEWADJ_SET_OVERRIDE_CACHE_SYNC_ENABLE_VALUE_OVERRIDE]

//>> PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG]

//>> PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG]


//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_INVERT_SENSE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_ADJUSTMENT_DIR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_OVR_PARATIY_ERROR]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.setBit<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return o_data.clearBit<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.extractToRight<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]
static inline bool GET_CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG));
#endif
    return i_data.getBit<CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_DCADJ_WRAP_SET_CONFIG_CHKSW_NO_DCC_CONFIG_VISIBLE]

//>> PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC;
#endif
    return fapi2::getScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]

//>> PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return fapi2::putScom(i_target, CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC]


//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return o_data.insertFromRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& SET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return o_data.setBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& CLEAR_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return o_data.clearBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline fapi2::buffer<uint64_t>& GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return i_data.extractToRight<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]
static inline bool GET_CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC));
#endif
    return i_data.getBit<CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CLK_ADJ_02_SKEW_WRAP_SKEWADJ_SET_SWAP_CORE_INC_DEC_CORE_INC_DEC_INVERT]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO]


//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO]


//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO]


//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW]

//>> PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW]


//>> SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15]

//>> SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15]

//>> GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI, FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_FSI_BYTE,
                           FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15,
           FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_SCRATCH_REGISTER_15_SR_SCRATCH_REGISTER_15]

//>> PREP_[QMETRA0_TR1_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_QMETRA0_TR1_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[QMETRA0_TR1_CONFIG_2]

//>> GET_[QMETRA0_TR1_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_QMETRA0_TR1_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = QMETRA0_TR1_CONFIG_2;
#endif
    return fapi2::getScom(i_target, QMETRA0_TR1_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_2]

//>> PUT_[QMETRA0_TR1_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_QMETRA0_TR1_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_2));
#endif
    return fapi2::putScom(i_target, QMETRA0_TR1_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[QMETRA0_TR1_CONFIG_2]


//>> SET_[QMETRA0_TR1_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_2_A,
           QMETRA0_TR1_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_2_A]

//>> SET_[QMETRA0_TR1_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_2_A,
           QMETRA0_TR1_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_2_A]

//>> GET_[QMETRA0_TR1_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_2));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_2_A,
           QMETRA0_TR1_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_2_A]

//>> SET_[QMETRA0_TR1_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_2_B,
           QMETRA0_TR1_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_2_B]

//>> SET_[QMETRA0_TR1_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_QMETRA0_TR1_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_2));
#endif
    return o_data.insertFromRight<QMETRA0_TR1_CONFIG_2_B,
           QMETRA0_TR1_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[QMETRA0_TR1_CONFIG_2_B]

//>> GET_[QMETRA0_TR1_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_QMETRA0_TR1_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(QMETRA0_TR1_CONFIG_2));
#endif
    return i_data.extractToRight<QMETRA0_TR1_CONFIG_2_B,
           QMETRA0_TR1_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access QMETRA0_TR1_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[QMETRA0_TR1_CONFIG_2_B]

//>> PREP_[COMP_INTR_INTERRUPT1_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT1_REG_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT1_REG_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT1_REG_RW]

//>> GET_[COMP_INTR_INTERRUPT1_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT1_REG_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT1_REG_RW;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT1_REG_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT1_REG_RW]

//>> PUT_[COMP_INTR_INTERRUPT1_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT1_REG_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT1_REG_RW, COMP_INTR_INTERRUPT1_REG_WO_AND, COMP_INTR_INTERRUPT1_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT1_REG_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT1_REG_RW]

//>> PREP_[COMP_INTR_INTERRUPT1_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT1_REG_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT1_REG_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT1_REG_WO_AND]

//>> GET_[COMP_INTR_INTERRUPT1_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT1_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT1_REG_WO_AND;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT1_REG_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT1_REG_WO_AND]

//>> PUT_[COMP_INTR_INTERRUPT1_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT1_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT1_REG_RW, COMP_INTR_INTERRUPT1_REG_WO_AND, COMP_INTR_INTERRUPT1_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT1_REG_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT1_REG_WO_AND]

//>> PREP_[COMP_INTR_INTERRUPT1_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT1_REG_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT1_REG_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT1_REG_WO_OR]

//>> GET_[COMP_INTR_INTERRUPT1_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT1_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT1_REG_WO_OR;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT1_REG_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT1_REG_WO_OR]

//>> PUT_[COMP_INTR_INTERRUPT1_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT1_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT1_REG_RW, COMP_INTR_INTERRUPT1_REG_WO_AND, COMP_INTR_INTERRUPT1_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT1_REG_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT1_REG_WO_OR]


//>> SET_[COMP_INTR_INTERRUPT1_REG_INTERRUPT1]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT1_REG_INTERRUPT1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT1_REG_RW, COMP_INTR_INTERRUPT1_REG_WO_AND, COMP_INTR_INTERRUPT1_REG_WO_OR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT1_REG_INTERRUPT1,
           COMP_INTR_INTERRUPT1_REG_INTERRUPT1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access COMP_INTR_INTERRUPT1_REG_INTERRUPT1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT1_REG_INTERRUPT1]

//>> SET_[COMP_INTR_INTERRUPT1_REG_INTERRUPT1]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT1_REG_INTERRUPT1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT1_REG_RW, COMP_INTR_INTERRUPT1_REG_WO_AND, COMP_INTR_INTERRUPT1_REG_WO_OR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT1_REG_INTERRUPT1,
           COMP_INTR_INTERRUPT1_REG_INTERRUPT1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access COMP_INTR_INTERRUPT1_REG_INTERRUPT1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT1_REG_INTERRUPT1]

//>> GET_[COMP_INTR_INTERRUPT1_REG_INTERRUPT1]
static inline fapi2::buffer<uint64_t>& GET_COMP_INTR_INTERRUPT1_REG_INTERRUPT1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT1_REG_RW, COMP_INTR_INTERRUPT1_REG_WO_AND, COMP_INTR_INTERRUPT1_REG_WO_OR));
#endif
    return i_data.extractToRight<COMP_INTR_INTERRUPT1_REG_INTERRUPT1,
           COMP_INTR_INTERRUPT1_REG_INTERRUPT1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access COMP_INTR_INTERRUPT1_REG_INTERRUPT1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT1_REG_INTERRUPT1]

//>> PREP_[COMP_INTR_INTERRUPT2_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT2_REG_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT2_REG_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT2_REG_RW]

//>> GET_[COMP_INTR_INTERRUPT2_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT2_REG_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT2_REG_RW;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT2_REG_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT2_REG_RW]

//>> PUT_[COMP_INTR_INTERRUPT2_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT2_REG_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT2_REG_RW, COMP_INTR_INTERRUPT2_REG_WO_AND, COMP_INTR_INTERRUPT2_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT2_REG_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT2_REG_RW]

//>> PREP_[COMP_INTR_INTERRUPT2_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT2_REG_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT2_REG_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT2_REG_WO_AND]

//>> GET_[COMP_INTR_INTERRUPT2_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT2_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT2_REG_WO_AND;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT2_REG_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT2_REG_WO_AND]

//>> PUT_[COMP_INTR_INTERRUPT2_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT2_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT2_REG_RW, COMP_INTR_INTERRUPT2_REG_WO_AND, COMP_INTR_INTERRUPT2_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT2_REG_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT2_REG_WO_AND]

//>> PREP_[COMP_INTR_INTERRUPT2_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT2_REG_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT2_REG_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT2_REG_WO_OR]

//>> GET_[COMP_INTR_INTERRUPT2_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT2_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT2_REG_WO_OR;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT2_REG_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT2_REG_WO_OR]

//>> PUT_[COMP_INTR_INTERRUPT2_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT2_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT2_REG_RW, COMP_INTR_INTERRUPT2_REG_WO_AND, COMP_INTR_INTERRUPT2_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT2_REG_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT2_REG_WO_OR]


//>> SET_[COMP_INTR_INTERRUPT2_REG_INTERRUPT2]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT2_REG_INTERRUPT2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT2_REG_RW, COMP_INTR_INTERRUPT2_REG_WO_AND, COMP_INTR_INTERRUPT2_REG_WO_OR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT2_REG_INTERRUPT2,
           COMP_INTR_INTERRUPT2_REG_INTERRUPT2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access COMP_INTR_INTERRUPT2_REG_INTERRUPT2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT2_REG_INTERRUPT2]

//>> SET_[COMP_INTR_INTERRUPT2_REG_INTERRUPT2]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT2_REG_INTERRUPT2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT2_REG_RW, COMP_INTR_INTERRUPT2_REG_WO_AND, COMP_INTR_INTERRUPT2_REG_WO_OR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT2_REG_INTERRUPT2,
           COMP_INTR_INTERRUPT2_REG_INTERRUPT2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access COMP_INTR_INTERRUPT2_REG_INTERRUPT2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT2_REG_INTERRUPT2]

//>> GET_[COMP_INTR_INTERRUPT2_REG_INTERRUPT2]
static inline fapi2::buffer<uint64_t>& GET_COMP_INTR_INTERRUPT2_REG_INTERRUPT2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT2_REG_RW, COMP_INTR_INTERRUPT2_REG_WO_AND, COMP_INTR_INTERRUPT2_REG_WO_OR));
#endif
    return i_data.extractToRight<COMP_INTR_INTERRUPT2_REG_INTERRUPT2,
           COMP_INTR_INTERRUPT2_REG_INTERRUPT2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access COMP_INTR_INTERRUPT2_REG_INTERRUPT2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT2_REG_INTERRUPT2]

//>> PREP_[COMP_INTR_INTERRUPT3_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT3_REG_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT3_REG_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT3_REG_RW]

//>> GET_[COMP_INTR_INTERRUPT3_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT3_REG_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT3_REG_RW;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT3_REG_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT3_REG_RW]

//>> PUT_[COMP_INTR_INTERRUPT3_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT3_REG_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT3_REG_RW, COMP_INTR_INTERRUPT3_REG_WO_AND, COMP_INTR_INTERRUPT3_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT3_REG_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT3_REG_RW]

//>> PREP_[COMP_INTR_INTERRUPT3_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT3_REG_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT3_REG_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT3_REG_WO_AND]

//>> GET_[COMP_INTR_INTERRUPT3_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT3_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT3_REG_WO_AND;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT3_REG_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT3_REG_WO_AND]

//>> PUT_[COMP_INTR_INTERRUPT3_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT3_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT3_REG_RW, COMP_INTR_INTERRUPT3_REG_WO_AND, COMP_INTR_INTERRUPT3_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT3_REG_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT3_REG_WO_AND]

//>> PREP_[COMP_INTR_INTERRUPT3_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT3_REG_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT3_REG_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT3_REG_WO_OR]

//>> GET_[COMP_INTR_INTERRUPT3_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT3_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT3_REG_WO_OR;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT3_REG_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT3_REG_WO_OR]

//>> PUT_[COMP_INTR_INTERRUPT3_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT3_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT3_REG_RW, COMP_INTR_INTERRUPT3_REG_WO_AND, COMP_INTR_INTERRUPT3_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT3_REG_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT3_REG_WO_OR]


//>> SET_[COMP_INTR_INTERRUPT3_REG_INTERRUPT3]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT3_REG_INTERRUPT3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT3_REG_RW, COMP_INTR_INTERRUPT3_REG_WO_AND, COMP_INTR_INTERRUPT3_REG_WO_OR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT3_REG_INTERRUPT3,
           COMP_INTR_INTERRUPT3_REG_INTERRUPT3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access COMP_INTR_INTERRUPT3_REG_INTERRUPT3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT3_REG_INTERRUPT3]

//>> SET_[COMP_INTR_INTERRUPT3_REG_INTERRUPT3]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT3_REG_INTERRUPT3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT3_REG_RW, COMP_INTR_INTERRUPT3_REG_WO_AND, COMP_INTR_INTERRUPT3_REG_WO_OR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT3_REG_INTERRUPT3,
           COMP_INTR_INTERRUPT3_REG_INTERRUPT3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access COMP_INTR_INTERRUPT3_REG_INTERRUPT3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT3_REG_INTERRUPT3]

//>> GET_[COMP_INTR_INTERRUPT3_REG_INTERRUPT3]
static inline fapi2::buffer<uint64_t>& GET_COMP_INTR_INTERRUPT3_REG_INTERRUPT3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT3_REG_RW, COMP_INTR_INTERRUPT3_REG_WO_AND, COMP_INTR_INTERRUPT3_REG_WO_OR));
#endif
    return i_data.extractToRight<COMP_INTR_INTERRUPT3_REG_INTERRUPT3,
           COMP_INTR_INTERRUPT3_REG_INTERRUPT3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access COMP_INTR_INTERRUPT3_REG_INTERRUPT3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT3_REG_INTERRUPT3]

//>> PREP_[COMP_INTR_INTERRUPT4_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT4_REG_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT4_REG_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT4_REG_RW]

//>> GET_[COMP_INTR_INTERRUPT4_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT4_REG_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT4_REG_RW;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT4_REG_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT4_REG_RW]

//>> PUT_[COMP_INTR_INTERRUPT4_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT4_REG_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT4_REG_RW, COMP_INTR_INTERRUPT4_REG_WO_AND, COMP_INTR_INTERRUPT4_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT4_REG_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT4_REG_RW]

//>> PREP_[COMP_INTR_INTERRUPT4_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT4_REG_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT4_REG_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT4_REG_WO_AND]

//>> GET_[COMP_INTR_INTERRUPT4_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT4_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT4_REG_WO_AND;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT4_REG_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT4_REG_WO_AND]

//>> PUT_[COMP_INTR_INTERRUPT4_REG_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT4_REG_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT4_REG_RW, COMP_INTR_INTERRUPT4_REG_WO_AND, COMP_INTR_INTERRUPT4_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT4_REG_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT4_REG_WO_AND]

//>> PREP_[COMP_INTR_INTERRUPT4_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT4_REG_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT4_REG_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT4_REG_WO_OR]

//>> GET_[COMP_INTR_INTERRUPT4_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT4_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT4_REG_WO_OR;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT4_REG_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT4_REG_WO_OR]

//>> PUT_[COMP_INTR_INTERRUPT4_REG_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT4_REG_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT4_REG_RW, COMP_INTR_INTERRUPT4_REG_WO_AND, COMP_INTR_INTERRUPT4_REG_WO_OR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT4_REG_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT4_REG_WO_OR]


//>> SET_[COMP_INTR_INTERRUPT4_REG_INTERRUPT4]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT4_REG_INTERRUPT4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT4_REG_RW, COMP_INTR_INTERRUPT4_REG_WO_AND, COMP_INTR_INTERRUPT4_REG_WO_OR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT4_REG_INTERRUPT4,
           COMP_INTR_INTERRUPT4_REG_INTERRUPT4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access COMP_INTR_INTERRUPT4_REG_INTERRUPT4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT4_REG_INTERRUPT4]

//>> SET_[COMP_INTR_INTERRUPT4_REG_INTERRUPT4]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT4_REG_INTERRUPT4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT4_REG_RW, COMP_INTR_INTERRUPT4_REG_WO_AND, COMP_INTR_INTERRUPT4_REG_WO_OR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT4_REG_INTERRUPT4,
           COMP_INTR_INTERRUPT4_REG_INTERRUPT4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access COMP_INTR_INTERRUPT4_REG_INTERRUPT4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT4_REG_INTERRUPT4]

//>> GET_[COMP_INTR_INTERRUPT4_REG_INTERRUPT4]
static inline fapi2::buffer<uint64_t>& GET_COMP_INTR_INTERRUPT4_REG_INTERRUPT4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT4_REG_RW, COMP_INTR_INTERRUPT4_REG_WO_AND, COMP_INTR_INTERRUPT4_REG_WO_OR));
#endif
    return i_data.extractToRight<COMP_INTR_INTERRUPT4_REG_INTERRUPT4,
           COMP_INTR_INTERRUPT4_REG_INTERRUPT4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access COMP_INTR_INTERRUPT4_REG_INTERRUPT4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT4_REG_INTERRUPT4]

//>> PREP_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW]

//>> GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW]

//>> PUT_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW]

//>> PREP_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND]

//>> GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND]

//>> PUT_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND]

//>> PREP_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR]

//>> GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR;
#endif
    return fapi2::getScom(i_target, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR]

//>> PUT_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return fapi2::putScom(i_target, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR]


//>> SET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP]

//>> SET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP]

//>> SET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return o_data.setBit<COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP]

//>> CLEAR_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP]
static inline fapi2::buffer<uint64_t>& CLEAR_COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return o_data.clearBit<COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP]

//>> GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP]
static inline fapi2::buffer<uint64_t>& GET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return i_data.extractToRight<COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP]

//>> GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP]
static inline bool GET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return i_data.getBit<COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_GP]

//>> SET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC]

//>> SET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return o_data.insertFromRight<COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC]

//>> SET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC]
static inline fapi2::buffer<uint64_t>& SET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return o_data.setBit<COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC]

//>> CLEAR_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC]
static inline fapi2::buffer<uint64_t>& CLEAR_COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return o_data.clearBit<COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC]

//>> GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC]
static inline fapi2::buffer<uint64_t>& GET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return i_data.extractToRight<COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC]

//>> GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC]
static inline bool GET_COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW, COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WAND,
                           COMP_INTR_INTERRUPT_TYPE_MASK_REG_RW_WOR));
#endif
    return i_data.getBit<COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[COMP_INTR_INTERRUPT_TYPE_MASK_REG_CC]

//>> PREP_[EPS_THERM_WSUB_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_DATA0]

//>> GET_[EPS_THERM_WSUB_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA0;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_DATA0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_DATA0]

//>> PUT_[EPS_THERM_WSUB_SKITTER_DATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_DATA0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_DATA0));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_DATA0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_DATA0]


//>> PREP_[EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_MODE_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_MODE_REG]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_MODE_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_MODE_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG]

//>> PUT_[EPS_THERM_WSUB_SKITTER_MODE_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_MODE_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_MODE_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_MODE_REG]


//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_DISABLE_SKITTER_STICKINESS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_DBGTRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_RESET_TRIG_SEL]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS,
           EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_SAMPLE_GUTS]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_HOLD_SAMPLE_WITH_TRIGGER]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.setBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return o_data.clearBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]
static inline bool GET_EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_MODE_REG));
#endif
    return i_data.getBit<EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_MODE_REG_SKITTER_DATA_V_LT]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_1_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_1_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_1_MDA_M1B_DATA_AREA_1]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10]

//>> SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10]

//>> GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI, FSXCOMP_FSXLOG_M1B_DATA_AREA_10_FSI_BYTE,
                           FSXCOMP_FSXLOG_M1B_DATA_AREA_10_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10,
           FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M1B_DATA_AREA_10_MDA_M1B_DATA_AREA_10]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW]

//>> PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW]


//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7]

//>> SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7]

//>> GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI, FSXCOMP_FSXLOG_M2A_DATA_AREA_7_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2A_DATA_AREA_7_RW));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7,
           FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2A_DATA_AREA_7_MDA_M2A_DATA_AREA_7]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI]

//>> PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14]

//>> SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14]

//>> GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI, FSXCOMP_FSXLOG_M2B_DATA_AREA_14_FSI_BYTE,
                           FSXCOMP_FSXLOG_M2B_DATA_AREA_14_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14,
           FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_M2B_DATA_AREA_14_MDA_M2B_DATA_AREA_14]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE]

//>> PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO(
    const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO(
    const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO;
#endif
    return fapi2::getScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO]

//>> PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO(
    const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return fapi2::putScom(i_target, FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO]


//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline bool
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]
static inline bool
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1]
static inline bool
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2]
static inline bool
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_PIB_SLAVE_A_RAM_PARITY_ERROR_DETECTED_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline bool
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_READ_EMPTY_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]
static inline bool
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_WRITE_FULL_PIB_SLAVE_A_MAILBOX_ERROR_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2]
static inline fapi2::buffer<uint64_t>&
CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ILLEGAL_OPERATION_ATTEMPTED_2]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_15_12]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.setBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1]

//>> CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1]
static inline fapi2::buffer<uint64_t>& CLEAR_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.clearBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1]
static inline bool GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.getBit<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_CLEAR_STATUS_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1]
static inline fapi2::buffer<uint64_t>&
SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1]
static inline fapi2::buffer<uint64_t>&
GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_ADDRESS_OF_PIB_PARITY_ERROR_1]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28]

//>> SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28]
static inline fapi2::buffer<uint64_t>& SET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return o_data.insertFromRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28]

//>> GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28]
static inline fapi2::buffer<uint64_t>& GET_FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_FSI_BYTE,
                           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_RO));
#endif
    return i_data.extractToRight<FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28,
           FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[FSXCOMP_FSXLOG_MAILBOX_SLAVE_B_DOORBELL_ERROR_STATUS_MSBDES_UNUSED_B_31_28]

//>> PREP_[L3TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA0_TR0_CONFIG_2]

//>> GET_[L3TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA0_TR0_CONFIG_2;
#endif
    return fapi2::getScom(i_target, L3TRA0_TR0_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_2]

//>> PUT_[L3TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_2));
#endif
    return fapi2::putScom(i_target, L3TRA0_TR0_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA0_TR0_CONFIG_2]


//>> SET_[L3TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_2_A,
           L3TRA0_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_2_A]

//>> SET_[L3TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_2_A,
           L3TRA0_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_2_A]

//>> GET_[L3TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_2_A,
           L3TRA0_TR0_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_2_A]

//>> SET_[L3TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_2_B,
           L3TRA0_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_2_B]

//>> SET_[L3TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA0_TR0_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<L3TRA0_TR0_CONFIG_2_B,
           L3TRA0_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA0_TR0_CONFIG_2_B]

//>> GET_[L3TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_L3TRA0_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA0_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<L3TRA0_TR0_CONFIG_2_B,
           L3TRA0_TR0_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA0_TR0_CONFIG_2_B]

//>> PREP_[L3TRA1_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA1_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA1_TR1_CONFIG_4]

//>> GET_[L3TRA1_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA1_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA1_TR1_CONFIG_4;
#endif
    return fapi2::getScom(i_target, L3TRA1_TR1_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_4]

//>> PUT_[L3TRA1_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA1_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_4));
#endif
    return fapi2::putScom(i_target, L3TRA1_TR1_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA1_TR1_CONFIG_4]


//>> SET_[L3TRA1_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_4_A,
           L3TRA1_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_4_A]

//>> SET_[L3TRA1_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_4_A,
           L3TRA1_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_4_A]

//>> GET_[L3TRA1_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_4_A,
           L3TRA1_TR1_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_4_A]

//>> SET_[L3TRA1_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_4_B,
           L3TRA1_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_4_B]

//>> SET_[L3TRA1_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_L3TRA1_TR1_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<L3TRA1_TR1_CONFIG_4_B,
           L3TRA1_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA1_TR1_CONFIG_4_B]

//>> GET_[L3TRA1_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_L3TRA1_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA1_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<L3TRA1_TR1_CONFIG_4_B,
           L3TRA1_TR1_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA1_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA1_TR1_CONFIG_4_B]

//>> PREP_[L3TRA2_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA2_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA2_TR1_CONFIG_3]

//>> GET_[L3TRA2_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA2_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA2_TR1_CONFIG_3;
#endif
    return fapi2::getScom(i_target, L3TRA2_TR1_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_3]

//>> PUT_[L3TRA2_TR1_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA2_TR1_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_3));
#endif
    return fapi2::putScom(i_target, L3TRA2_TR1_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA2_TR1_CONFIG_3]


//>> SET_[L3TRA2_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_3_C,
           L3TRA2_TR1_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_3_C]

//>> SET_[L3TRA2_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_3_C,
           L3TRA2_TR1_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_3_C]

//>> GET_[L3TRA2_TR1_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_3));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_3_C,
           L3TRA2_TR1_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_3_C]

//>> SET_[L3TRA2_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_3_D,
           L3TRA2_TR1_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_3_D]

//>> SET_[L3TRA2_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA2_TR1_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_3));
#endif
    return o_data.insertFromRight<L3TRA2_TR1_CONFIG_3_D,
           L3TRA2_TR1_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA2_TR1_CONFIG_3_D]

//>> GET_[L3TRA2_TR1_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_L3TRA2_TR1_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA2_TR1_CONFIG_3));
#endif
    return i_data.extractToRight<L3TRA2_TR1_CONFIG_3_D,
           L3TRA2_TR1_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA2_TR1_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA2_TR1_CONFIG_3_D]

//>> PREP_[L3TRA3_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_L3TRA3_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_CONFIG_5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[L3TRA3_TR0_CONFIG_5]

//>> GET_[L3TRA3_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_L3TRA3_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = L3TRA3_TR0_CONFIG_5;
#endif
    return fapi2::getScom(i_target, L3TRA3_TR0_CONFIG_5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_5]

//>> PUT_[L3TRA3_TR0_CONFIG_5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_L3TRA3_TR0_CONFIG_5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_5));
#endif
    return fapi2::putScom(i_target, L3TRA3_TR0_CONFIG_5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[L3TRA3_TR0_CONFIG_5]


//>> SET_[L3TRA3_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_5_C,
           L3TRA3_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_5_C]

//>> SET_[L3TRA3_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_5_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_5_C,
           L3TRA3_TR0_CONFIG_5_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_5_C]

//>> GET_[L3TRA3_TR0_CONFIG_5_C]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_5_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_5_C,
           L3TRA3_TR0_CONFIG_5_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_5_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_5_C]

//>> SET_[L3TRA3_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_5_D,
           L3TRA3_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_5_D]

//>> SET_[L3TRA3_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& SET_L3TRA3_TR0_CONFIG_5_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_5));
#endif
    return o_data.insertFromRight<L3TRA3_TR0_CONFIG_5_D,
           L3TRA3_TR0_CONFIG_5_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[L3TRA3_TR0_CONFIG_5_D]

//>> GET_[L3TRA3_TR0_CONFIG_5_D]
static inline fapi2::buffer<uint64_t>& GET_L3TRA3_TR0_CONFIG_5_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(L3TRA3_TR0_CONFIG_5));
#endif
    return i_data.extractToRight<L3TRA3_TR0_CONFIG_5_D,
           L3TRA3_TR0_CONFIG_5_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access L3TRA3_TR0_CONFIG_5_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[L3TRA3_TR0_CONFIG_5_D]

//>> PREP_[OTPC_M_MEASURE_REG10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_OTPC_M_MEASURE_REG10(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG10;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[OTPC_M_MEASURE_REG10]

//>> GET_[OTPC_M_MEASURE_REG10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_OTPC_M_MEASURE_REG10(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = OTPC_M_MEASURE_REG10;
#endif
    return fapi2::getScom(i_target, OTPC_M_MEASURE_REG10, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG10]

//>> PUT_[OTPC_M_MEASURE_REG10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_OTPC_M_MEASURE_REG10(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG10));
#endif
    return fapi2::putScom(i_target, OTPC_M_MEASURE_REG10, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[OTPC_M_MEASURE_REG10]


//>> SET_[OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG10));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA,
           OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA]

//>> SET_[OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA]
static inline fapi2::buffer<uint64_t>& SET_OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG10));
#endif
    return o_data.insertFromRight<OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA,
           OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA]

//>> GET_[OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA]
static inline fapi2::buffer<uint64_t>& GET_OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(OTPC_M_MEASURE_REG10));
#endif
    return i_data.extractToRight<OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA,
           OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[OTPC_M_MEASURE_REG10_SEEPROM_MEASUREMENT10_DATA]

//>> PREP_[REC_ERR_MST3_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST3_REG3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST3_REG3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST3_REG3]

//>> GET_[REC_ERR_MST3_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST3_REG3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST3_REG3;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST3_REG3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST3_REG3]

//>> PUT_[REC_ERR_MST3_REG3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST3_REG3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST3_REG3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST3_REG3]


//>> SET_[REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_48_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_48_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_48_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_48_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_48_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_48_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_48_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_48_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_48_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_48_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_48_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_48_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_48_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_48_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_48_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_48_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_48_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_48_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_48_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_49_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_49_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_49_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_49_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_49_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_49_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_49_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_49_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_49_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_49_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_49_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_49_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_49_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_49_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_49_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_49_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_49_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_49_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_49_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_50_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_50_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_50_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_50_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_50_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_50_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_50_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_50_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_50_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_50_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_50_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_50_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_50_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_50_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_50_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_50_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_50_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_50_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_50_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_51_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_51_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_51_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_51_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_51_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_51_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_51_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_51_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_51_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_51_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_51_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_51_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_51_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_51_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_51_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_51_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_51_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_51_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_51_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_52_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_52_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_52_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_52_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_52_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_52_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_52_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_52_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_52_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_52_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_52_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_52_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_52_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_52_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_52_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_52_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_52_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_52_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_52_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_53_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_53_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_53_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_53_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_53_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_53_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_53_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_53_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_53_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_53_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_53_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_53_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_53_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_53_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_53_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_53_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_53_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_53_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_53_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_54_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_54_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_54_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_54_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_54_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_54_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_54_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_54_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_54_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_54_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_54_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_54_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_54_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_54_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_54_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_54_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_54_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_54_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_54_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_55_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_55_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_55_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_55_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_55_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_55_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_55_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_55_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_55_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_55_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_55_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_55_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_55_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_55_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_55_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_55_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_55_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_55_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_55_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_56_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_56_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_56_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_56_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_56_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_56_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_56_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_56_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_56_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_56_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_56_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_56_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_56_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_56_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_56_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_56_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_56_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_56_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_56_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_57_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_57_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_57_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_57_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_57_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_57_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_57_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_57_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_57_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_57_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_57_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_57_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_57_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_57_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_57_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_57_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_57_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_57_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_57_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_58_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_58_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_58_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_58_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_58_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_58_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_58_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_58_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_58_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_58_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_58_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_58_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_58_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_58_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_58_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_58_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_58_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_58_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_58_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_59_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_59_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_59_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_59_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_59_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_59_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_59_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_59_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_59_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_59_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_59_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_59_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_59_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_59_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_59_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_59_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_59_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_59_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_59_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_60_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_60_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_60_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_60_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_60_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_60_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_60_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_60_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_60_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_60_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_60_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_60_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_60_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_60_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_60_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_60_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_60_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_60_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_60_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_61_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_61_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_61_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_61_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_61_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_61_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_61_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_61_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_61_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_61_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_61_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_61_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_61_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_61_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_61_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_61_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_61_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_61_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_61_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_62_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_62_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_62_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_62_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_62_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_62_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_62_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_62_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_62_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_62_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_62_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_62_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_62_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_62_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_62_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_62_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_62_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_62_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_62_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.setBit<REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.clearBit<REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT]

//>> GET_[REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.getBit<REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_63_MST3_RESPONSE_BIT]

//>> SET_[REC_ERR_MST3_REG3_63_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_63_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_63_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_63_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST3_REG3_63_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_63_MST3_ERROR_CODE]

//>> SET_[REC_ERR_MST3_REG3_63_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST3_REG3_63_MST3_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return o_data.insertFromRight<REC_ERR_MST3_REG3_63_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_63_MST3_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST3_REG3_63_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST3_REG3_63_MST3_ERROR_CODE]

//>> GET_[REC_ERR_MST3_REG3_63_MST3_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST3_REG3_63_MST3_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST3_REG3));
#endif
    return i_data.extractToRight<REC_ERR_MST3_REG3_63_MST3_ERROR_CODE,
           REC_ERR_MST3_REG3_63_MST3_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST3_REG3_63_MST3_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST3_REG3_63_MST3_ERROR_CODE]

//>> PREP_[REC_ERR_MST7_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST7_REG2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST7_REG2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST7_REG2]

//>> GET_[REC_ERR_MST7_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST7_REG2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST7_REG2;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST7_REG2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST7_REG2]

//>> PUT_[REC_ERR_MST7_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST7_REG2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST7_REG2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST7_REG2]


//>> SET_[REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_32_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_32_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_32_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_32_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_32_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_32_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_32_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_32_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_32_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_32_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_32_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_32_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_32_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_32_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_32_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_32_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_32_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_32_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_32_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_33_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_33_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_33_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_33_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_33_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_33_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_33_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_33_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_33_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_33_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_33_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_33_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_33_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_33_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_33_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_33_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_33_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_33_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_33_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_34_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_34_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_34_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_34_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_34_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_34_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_34_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_34_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_34_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_34_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_34_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_34_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_34_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_34_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_34_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_34_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_34_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_34_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_34_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_35_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_35_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_35_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_35_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_35_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_35_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_35_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_35_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_35_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_35_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_35_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_35_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_35_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_35_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_35_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_35_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_35_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_35_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_35_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_36_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_36_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_36_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_36_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_36_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_36_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_36_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_36_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_36_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_36_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_36_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_36_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_36_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_36_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_36_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_36_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_36_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_36_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_36_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_37_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_37_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_37_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_37_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_37_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_37_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_37_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_37_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_37_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_37_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_37_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_37_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_37_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_37_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_37_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_37_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_37_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_37_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_37_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_38_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_38_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_38_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_38_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_38_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_38_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_38_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_38_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_38_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_38_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_38_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_38_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_38_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_38_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_38_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_38_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_38_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_38_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_38_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_39_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_39_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_39_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_39_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_39_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_39_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_39_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_39_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_39_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_39_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_39_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_39_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_39_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_39_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_39_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_39_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_39_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_39_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_39_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_40_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_40_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_40_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_40_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_40_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_40_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_40_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_40_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_40_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_40_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_40_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_40_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_40_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_40_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_40_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_40_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_40_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_40_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_40_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_41_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_41_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_41_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_41_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_41_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_41_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_41_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_41_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_41_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_41_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_41_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_41_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_41_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_41_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_41_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_41_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_41_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_41_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_41_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_42_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_42_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_42_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_42_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_42_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_42_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_42_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_42_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_42_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_42_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_42_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_42_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_42_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_42_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_42_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_42_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_42_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_42_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_42_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_43_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_43_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_43_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_43_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_43_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_43_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_43_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_43_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_43_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_43_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_43_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_43_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_43_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_43_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_43_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_43_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_43_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_43_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_43_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_44_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_44_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_44_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_44_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_44_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_44_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_44_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_44_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_44_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_44_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_44_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_44_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_44_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_44_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_44_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_44_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_44_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_44_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_44_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_45_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_45_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_45_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_45_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_45_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_45_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_45_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_45_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_45_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_45_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_45_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_45_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_45_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_45_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_45_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_45_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_45_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_45_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_45_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_46_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_46_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_46_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_46_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_46_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_46_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_46_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_46_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_46_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_46_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_46_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_46_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_46_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_46_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_46_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_46_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_46_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_46_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_46_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.setBit<REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT]

//>> GET_[REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.getBit<REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_47_MST7_RESPONSE_BIT]

//>> SET_[REC_ERR_MST7_REG2_47_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_47_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_47_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_47_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST7_REG2_47_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_47_MST7_ERROR_CODE]

//>> SET_[REC_ERR_MST7_REG2_47_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST7_REG2_47_MST7_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST7_REG2_47_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_47_MST7_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST7_REG2_47_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST7_REG2_47_MST7_ERROR_CODE]

//>> GET_[REC_ERR_MST7_REG2_47_MST7_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST7_REG2_47_MST7_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST7_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST7_REG2_47_MST7_ERROR_CODE,
           REC_ERR_MST7_REG2_47_MST7_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST7_REG2_47_MST7_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST7_REG2_47_MST7_ERROR_CODE]

//>> PREP_[REC_ERR_MST9_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REC_ERR_MST9_REG2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST9_REG2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REC_ERR_MST9_REG2]

//>> GET_[REC_ERR_MST9_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REC_ERR_MST9_REG2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REC_ERR_MST9_REG2;
#endif
    return fapi2::getScom(i_target, REC_ERR_MST9_REG2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REC_ERR_MST9_REG2]

//>> PUT_[REC_ERR_MST9_REG2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REC_ERR_MST9_REG2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return fapi2::putScom(i_target, REC_ERR_MST9_REG2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REC_ERR_MST9_REG2]


//>> SET_[REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_32_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_32_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_32_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_32_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_32_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_32_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_32_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_32_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_32_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_32_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_32_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_32_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_32_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_32_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_32_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_32_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_32_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_32_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_32_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_33_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_33_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_33_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_33_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_33_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_33_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_33_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_33_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_33_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_33_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_33_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_33_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_33_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_33_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_33_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_33_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_33_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_33_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_33_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_34_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_34_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_34_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_34_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_34_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_34_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_34_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_34_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_34_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_34_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_34_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_34_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_34_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_34_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_34_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_34_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_34_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_34_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_34_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_35_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_35_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_35_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_35_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_35_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_35_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_35_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_35_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_35_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_35_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_35_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_35_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_35_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_35_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_35_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_35_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_35_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_35_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_35_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_36_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_36_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_36_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_36_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_36_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_36_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_36_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_36_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_36_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_36_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_36_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_36_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_36_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_36_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_36_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_36_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_36_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_36_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_36_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_37_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_37_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_37_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_37_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_37_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_37_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_37_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_37_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_37_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_37_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_37_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_37_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_37_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_37_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_37_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_37_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_37_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_37_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_37_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_38_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_38_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_38_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_38_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_38_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_38_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_38_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_38_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_38_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_38_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_38_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_38_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_38_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_38_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_38_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_38_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_38_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_38_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_38_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_39_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_39_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_39_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_39_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_39_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_39_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_39_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_39_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_39_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_39_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_39_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_39_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_39_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_39_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_39_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_39_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_39_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_39_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_39_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_40_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_40_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_40_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_40_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_40_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_40_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_40_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_40_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_40_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_40_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_40_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_40_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_40_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_40_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_40_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_40_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_40_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_40_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_40_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_41_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_41_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_41_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_41_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_41_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_41_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_41_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_41_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_41_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_41_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_41_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_41_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_41_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_41_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_41_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_41_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_41_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_41_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_41_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_42_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_42_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_42_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_42_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_42_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_42_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_42_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_42_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_42_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_42_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_42_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_42_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_42_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_42_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_42_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_42_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_42_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_42_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_42_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_43_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_43_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_43_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_43_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_43_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_43_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_43_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_43_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_43_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_43_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_43_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_43_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_43_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_43_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_43_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_43_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_43_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_43_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_43_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_44_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_44_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_44_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_44_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_44_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_44_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_44_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_44_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_44_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_44_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_44_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_44_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_44_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_44_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_44_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_44_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_44_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_44_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_44_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_45_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_45_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_45_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_45_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_45_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_45_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_45_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_45_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_45_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_45_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_45_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_45_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_45_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_45_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_45_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_45_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_45_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_45_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_45_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_46_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_46_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_46_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_46_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_46_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_46_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_46_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_46_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_46_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_46_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_46_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_46_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_46_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_46_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_46_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_46_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_46_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_46_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_46_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.setBit<REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_perv Invalid dial access REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT]

//>> CLEAR_[REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& CLEAR_REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.clearBit<REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_perv Invalid dial access REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT]

//>> GET_[REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT]
static inline bool GET_REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.getBit<REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_perv Invalid dial access REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_47_MST9_RESPONSE_BIT]

//>> SET_[REC_ERR_MST9_REG2_47_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_47_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_47_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_47_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access REC_ERR_MST9_REG2_47_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_47_MST9_ERROR_CODE]

//>> SET_[REC_ERR_MST9_REG2_47_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& SET_REC_ERR_MST9_REG2_47_MST9_ERROR_CODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return o_data.insertFromRight<REC_ERR_MST9_REG2_47_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_47_MST9_ERROR_CODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access REC_ERR_MST9_REG2_47_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REC_ERR_MST9_REG2_47_MST9_ERROR_CODE]

//>> GET_[REC_ERR_MST9_REG2_47_MST9_ERROR_CODE]
static inline fapi2::buffer<uint64_t>& GET_REC_ERR_MST9_REG2_47_MST9_ERROR_CODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REC_ERR_MST9_REG2));
#endif
    return i_data.extractToRight<REC_ERR_MST9_REG2_47_MST9_ERROR_CODE,
           REC_ERR_MST9_REG2_47_MST9_ERROR_CODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access REC_ERR_MST9_REG2_47_MST9_ERROR_CODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REC_ERR_MST9_REG2_47_MST9_ERROR_CODE]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG109]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG109(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG109;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG109]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG109]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG109(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG109;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG109, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG109]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG109]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG109(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG109));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG109, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG109]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG109));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109,
           SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG109));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109,
           SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG109));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109,
           SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG109_REGISTER109]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG116]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG116(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG116;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG116]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG116]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG116(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG116;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG116, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG116]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG116]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG116(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG116));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG116, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG116]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG116));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116,
           SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG116));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116,
           SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG116));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116,
           SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG116_REGISTER116]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG121]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG121(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG121;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG121]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG121]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG121(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG121;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG121, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG121]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG121]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG121(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG121));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG121, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG121]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG121));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121,
           SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG121));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121,
           SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG121));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121,
           SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG121_REGISTER121]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG18]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG18(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG18;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG18]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG18]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG18(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG18;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG18, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG18]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG18]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG18(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG18));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG18, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG18]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG18));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18,
           SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG18));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18,
           SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG18));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18,
           SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG18_REGISTER18]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG30(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG30;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG30]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG30(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG30;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG30, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG30]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG30]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG30(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG30));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG30, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG30]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG30));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30,
           SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG30));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30,
           SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG30));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30,
           SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG30_REGISTER30]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG51]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG51(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG51;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG51]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG51]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG51(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG51;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG51, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG51]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG51]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG51(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG51));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG51, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG51]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG51));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51,
           SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG51));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51,
           SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG51));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51,
           SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG51_REGISTER51]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG66]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG66(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG66;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG66]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG66]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG66(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG66;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG66, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG66]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG66]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG66(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG66));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG66, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG66]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG66));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66,
           SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG66));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66,
           SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG66));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66,
           SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG66_REGISTER66]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG79]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG79(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG79;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG79]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG79]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG79(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG79;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG79, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG79]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG79]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG79(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG79));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG79, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG79]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG79));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79,
           SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG79));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79,
           SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG79));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79,
           SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG79_REGISTER79]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG8(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG8;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG8]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG8(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG8;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG8, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG8]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG8(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG8));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG8, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG8]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG8));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8,
           SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG8));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8,
           SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG8));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8,
           SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG8_REGISTER8]

//>> PREP_[SINGLE_OTP_ROM_OTPROM_REG93]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SINGLE_OTP_ROM_OTPROM_REG93(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG93;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SINGLE_OTP_ROM_OTPROM_REG93]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG93]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SINGLE_OTP_ROM_OTPROM_REG93(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SINGLE_OTP_ROM_OTPROM_REG93;
#endif
    return fapi2::getScom(i_target, SINGLE_OTP_ROM_OTPROM_REG93, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG93]

//>> PUT_[SINGLE_OTP_ROM_OTPROM_REG93]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SINGLE_OTP_ROM_OTPROM_REG93(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG93));
#endif
    return fapi2::putScom(i_target, SINGLE_OTP_ROM_OTPROM_REG93, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SINGLE_OTP_ROM_OTPROM_REG93]


//>> SET_[SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG93));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93,
           SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93]

//>> SET_[SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93]
static inline fapi2::buffer<uint64_t>& SET_SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG93));
#endif
    return o_data.insertFromRight<SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93,
           SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93]

//>> GET_[SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93]
static inline fapi2::buffer<uint64_t>& GET_SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SINGLE_OTP_ROM_OTPROM_REG93));
#endif
    return i_data.extractToRight<SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93,
           SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SINGLE_OTP_ROM_OTPROM_REG93_REGISTER93]

//>> PREP_[TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_2]

//>> GET_[TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_2;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_2]

//>> PUT_[TRA0_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_2]


//>> SET_[TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_A,
           TRA0_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_A]

//>> SET_[TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_A,
           TRA0_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_A]

//>> GET_[TRA0_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_2_A,
           TRA0_TR0_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access TRA0_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_2_A]

//>> SET_[TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_B,
           TRA0_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_B]

//>> SET_[TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_2_B,
           TRA0_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_2_B]

//>> GET_[TRA0_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_2_B,
           TRA0_TR0_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access TRA0_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_2_B]

//>> PREP_[TRA1_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_TRACE_HI_DATA_REG]

//>> GET_[TRA1_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_TRACE_HI_DATA_REG;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_TRACE_HI_DATA_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_TRACE_HI_DATA_REG]

//>> PUT_[TRA1_TR0_TRACE_HI_DATA_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_TRACE_HI_DATA_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_TRACE_HI_DATA_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_TRACE_HI_DATA_REG]


//>> SET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> SET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return o_data.insertFromRight<TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> GET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_TRACE_HI_DATA_REG));
#endif
    return i_data.extractToRight<TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA,
           TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_TRACE_HI_DATA_REG_TRACE_HI_DATA]

//>> PREP_[TRA1_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR1_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR1_CONFIG_4]

//>> GET_[TRA1_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR1_CONFIG_4;
#endif
    return fapi2::getScom(i_target, TRA1_TR1_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR1_CONFIG_4]

//>> PUT_[TRA1_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR1_CONFIG_4));
#endif
    return fapi2::putScom(i_target, TRA1_TR1_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR1_CONFIG_4]


//>> SET_[TRA1_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA1_TR1_CONFIG_4_A,
           TRA1_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access TRA1_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR1_CONFIG_4_A]

//>> SET_[TRA1_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR1_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA1_TR1_CONFIG_4_A,
           TRA1_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access TRA1_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR1_CONFIG_4_A]

//>> GET_[TRA1_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<TRA1_TR1_CONFIG_4_A,
           TRA1_TR1_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access TRA1_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR1_CONFIG_4_A]

//>> SET_[TRA1_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA1_TR1_CONFIG_4_B,
           TRA1_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_perv Invalid dial access TRA1_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR1_CONFIG_4_B]

//>> SET_[TRA1_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR1_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA1_TR1_CONFIG_4_B,
           TRA1_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_perv Invalid dial access TRA1_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR1_CONFIG_4_B]

//>> GET_[TRA1_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<TRA1_TR1_CONFIG_4_B,
           TRA1_TR1_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_perv Invalid dial access TRA1_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR1_CONFIG_4_B]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
