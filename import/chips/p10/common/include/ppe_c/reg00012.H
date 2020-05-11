/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_c/reg00012.H $            */
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

#ifndef __PPE_C_REG00012_H_
#define __PPE_C_REG00012_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_c
{
#endif


//>> PREP_[CPMS_CGCSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_CGCSR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CGCSR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_CGCSR]

//>> GET_[CPMS_CGCSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_CGCSR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CGCSR;
#endif
    return fapi2::getScom(i_target, CPMS_CGCSR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_CGCSR]

//>> PUT_[CPMS_CGCSR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_CGCSR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return fapi2::putScom(i_target, CPMS_CGCSR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_CGCSR]

//>> PREP_[CPMS_CGCSR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_CGCSR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CGCSR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_CGCSR_WO_CLEAR]

//>> GET_[CPMS_CGCSR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_CGCSR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CGCSR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, CPMS_CGCSR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_CGCSR_WO_CLEAR]

//>> PUT_[CPMS_CGCSR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_CGCSR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return fapi2::putScom(i_target, CPMS_CGCSR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_CGCSR_WO_CLEAR]

//>> PREP_[CPMS_CGCSR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_CGCSR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CGCSR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CPMS_CGCSR_WO_OR]

//>> GET_[CPMS_CGCSR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_CGCSR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_CGCSR_WO_OR;
#endif
    return fapi2::getScom(i_target, CPMS_CGCSR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CPMS_CGCSR_WO_OR]

//>> PUT_[CPMS_CGCSR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_CGCSR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return fapi2::putScom(i_target, CPMS_CGCSR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CPMS_CGCSR_WO_OR]


//>> SET_[CPMS_CGCSR_L3_CLK_SYNC_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_L3_CLK_SYNC_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CLK_SYNC_ENABLE]

//>> SET_[CPMS_CGCSR_L3_CLK_SYNC_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLK_SYNC_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_L3_CLK_SYNC_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CLK_SYNC_ENABLE]

//>> SET_[CPMS_CGCSR_L3_CLK_SYNC_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_L3_CLK_SYNC_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CLK_SYNC_ENABLE]

//>> CLEAR_[CPMS_CGCSR_L3_CLK_SYNC_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_L3_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_L3_CLK_SYNC_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CGCSR_L3_CLK_SYNC_ENABLE]

//>> GET_[CPMS_CGCSR_L3_CLK_SYNC_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CGCSR_L3_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_CGCSR_L3_CLK_SYNC_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_L3_CLK_SYNC_ENABLE]

//>> GET_[CPMS_CGCSR_L3_CLK_SYNC_ENABLE]
static inline bool GET_CPMS_CGCSR_L3_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_L3_CLK_SYNC_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_L3_CLK_SYNC_ENABLE]

//>> SET_[CPMS_CGCSR_CL2_CLK_SYNC_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_CL2_CLK_SYNC_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_CL2_CLK_SYNC_ENABLE]

//>> SET_[CPMS_CGCSR_CL2_CLK_SYNC_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLK_SYNC_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_CL2_CLK_SYNC_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_CL2_CLK_SYNC_ENABLE]

//>> SET_[CPMS_CGCSR_CL2_CLK_SYNC_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_CL2_CLK_SYNC_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_CL2_CLK_SYNC_ENABLE]

//>> CLEAR_[CPMS_CGCSR_CL2_CLK_SYNC_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_CL2_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_CL2_CLK_SYNC_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CGCSR_CL2_CLK_SYNC_ENABLE]

//>> GET_[CPMS_CGCSR_CL2_CLK_SYNC_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CGCSR_CL2_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_CGCSR_CL2_CLK_SYNC_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_CL2_CLK_SYNC_ENABLE]

//>> GET_[CPMS_CGCSR_CL2_CLK_SYNC_ENABLE]
static inline bool GET_CPMS_CGCSR_CL2_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_CL2_CLK_SYNC_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_CL2_CLK_SYNC_ENABLE]

//>> SET_[CPMS_CGCSR_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_RESERVED_2_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_RESERVED_2_3,
           CPMS_CGCSR_RESERVED_2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CGCSR_RESERVED_2_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_RESERVED_2_3]

//>> SET_[CPMS_CGCSR_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_RESERVED_2_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_RESERVED_2_3,
           CPMS_CGCSR_RESERVED_2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CGCSR_RESERVED_2_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_RESERVED_2_3]

//>> GET_[CPMS_CGCSR_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CGCSR_RESERVED_2_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_CGCSR_RESERVED_2_3,
           CPMS_CGCSR_RESERVED_2_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CGCSR_RESERVED_2_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_RESERVED_2_3]

//>> SET_[CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET]

//>> SET_[CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET]

//>> SET_[CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET]

//>> CLEAR_[CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET]

//>> GET_[CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET]

//>> GET_[CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET]
static inline bool GET_CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET]

//>> SET_[CPMS_CGCSR_L3_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_L3_CLKGLM_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CGCSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CLKGLM_SEL]

//>> SET_[CPMS_CGCSR_L3_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLKGLM_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_L3_CLKGLM_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CGCSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CLKGLM_SEL]

//>> SET_[CPMS_CGCSR_L3_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_L3_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CGCSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CLKGLM_SEL]

//>> CLEAR_[CPMS_CGCSR_L3_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_L3_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CGCSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CGCSR_L3_CLKGLM_SEL]

//>> GET_[CPMS_CGCSR_L3_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CGCSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_CGCSR_L3_CLKGLM_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CGCSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_L3_CLKGLM_SEL]

//>> GET_[CPMS_CGCSR_L3_CLKGLM_SEL]
static inline bool GET_CPMS_CGCSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_L3_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CGCSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_L3_CLKGLM_SEL]

//>> SET_[CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET]

//>> SET_[CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET]

//>> SET_[CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET]

//>> CLEAR_[CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET]

//>> GET_[CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET]

//>> GET_[CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET]
static inline bool GET_CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET]

//>> SET_[CPMS_CGCSR_CL2_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_CL2_CLKGLM_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_CL2_CLKGLM_SEL]

//>> SET_[CPMS_CGCSR_CL2_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLKGLM_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_CL2_CLKGLM_SEL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_CL2_CLKGLM_SEL]

//>> SET_[CPMS_CGCSR_CL2_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLKGLM_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_CL2_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_CL2_CLKGLM_SEL]

//>> CLEAR_[CPMS_CGCSR_CL2_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_CL2_CLKGLM_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_CL2_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CGCSR_CL2_CLKGLM_SEL]

//>> GET_[CPMS_CGCSR_CL2_CLKGLM_SEL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CGCSR_CL2_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_CGCSR_CL2_CLKGLM_SEL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_CL2_CLKGLM_SEL]

//>> GET_[CPMS_CGCSR_CL2_CLKGLM_SEL]
static inline bool GET_CPMS_CGCSR_CL2_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_CL2_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_CL2_CLKGLM_SEL]

//>> SET_[CPMS_CGCSR_L3_CACHE_SB_CTRL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CACHE_SB_CTRL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_L3_CACHE_SB_CTRL,
           CPMS_CGCSR_L3_CACHE_SB_CTRL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CGCSR_L3_CACHE_SB_CTRL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CACHE_SB_CTRL]

//>> SET_[CPMS_CGCSR_L3_CACHE_SB_CTRL]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CACHE_SB_CTRL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_L3_CACHE_SB_CTRL,
           CPMS_CGCSR_L3_CACHE_SB_CTRL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CGCSR_L3_CACHE_SB_CTRL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CACHE_SB_CTRL]

//>> GET_[CPMS_CGCSR_L3_CACHE_SB_CTRL]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CGCSR_L3_CACHE_SB_CTRL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_CGCSR_L3_CACHE_SB_CTRL,
           CPMS_CGCSR_L3_CACHE_SB_CTRL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CGCSR_L3_CACHE_SB_CTRL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_L3_CACHE_SB_CTRL]

//>> SET_[CPMS_CGCSR_L3_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_L3_CLK_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CLK_SYNC_DONE]

//>> SET_[CPMS_CGCSR_L3_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLK_SYNC_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_L3_CLK_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CLK_SYNC_DONE]

//>> SET_[CPMS_CGCSR_L3_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_L3_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_L3_CLK_SYNC_DONE]

//>> CLEAR_[CPMS_CGCSR_L3_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_L3_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CGCSR_L3_CLK_SYNC_DONE]

//>> GET_[CPMS_CGCSR_L3_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_CGCSR_L3_CLK_SYNC_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_L3_CLK_SYNC_DONE]

//>> GET_[CPMS_CGCSR_L3_CLK_SYNC_DONE]
static inline bool GET_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_L3_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_L3_CLK_SYNC_DONE]

//>> SET_[CPMS_CGCSR_CL2_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_CL2_CLK_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_CL2_CLK_SYNC_DONE]

//>> SET_[CPMS_CGCSR_CL2_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLK_SYNC_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.insertFromRight<CPMS_CGCSR_CL2_CLK_SYNC_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_CL2_CLK_SYNC_DONE]

//>> SET_[CPMS_CGCSR_CL2_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_CL2_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CPMS_CGCSR_CL2_CLK_SYNC_DONE]

//>> CLEAR_[CPMS_CGCSR_CL2_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_CL2_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CPMS_CGCSR_CL2_CLK_SYNC_DONE]

//>> GET_[CPMS_CGCSR_CL2_CLK_SYNC_DONE]
static inline fapi2::buffer<uint64_t>& GET_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.extractToRight<CPMS_CGCSR_CL2_CLK_SYNC_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_CL2_CLK_SYNC_DONE]

//>> GET_[CPMS_CGCSR_CL2_CLK_SYNC_DONE]
static inline bool GET_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_CL2_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:ppe_c Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CPMS_CGCSR_CL2_CLK_SYNC_DONE]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
