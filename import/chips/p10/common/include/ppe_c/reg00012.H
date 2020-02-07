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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_L3_CLK_SYNC_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_L3_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_L3_CLK_SYNC_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_CGCSR_L3_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_L3_CLK_SYNC_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_CL2_CLK_SYNC_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_CL2_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_CL2_CLK_SYNC_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_CGCSR_CL2_CLK_SYNC_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_CL2_CLK_SYNC_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_RESERVED_2_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_RESERVED_2_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_RESERVED_2_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_L3_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_L3_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_CGCSR_L3_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_L3_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLKGLM_ASYNC_RESET chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLKGLM_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_CL2_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_CL2_CLKGLM_SEL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_CL2_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_CGCSR_CL2_CLKGLM_SEL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_CL2_CLKGLM_SEL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLKGLM_SEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CACHE_SB_CTRL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CACHE_SB_CTRL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CACHE_SB_CTRL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_L3_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_L3_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_CGCSR_L3_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_L3_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_L3_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.setBit<CPMS_CGCSR_CL2_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return o_data.clearBit<CPMS_CGCSR_CL2_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

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
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_CGCSR_CL2_CLK_SYNC_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_CGCSR, CPMS_CGCSR_WO_CLEAR, CPMS_CGCSR_WO_OR));
#endif
    return i_data.getBit<CPMS_CGCSR_CL2_CLK_SYNC_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_CGCSR_CL2_CLK_SYNC_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CPMS_DHCR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DHCR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CPMS_DHCR(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CPMS_DHCR;
#endif
    return fapi2::getScom(i_target, CPMS_DHCR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}

template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CPMS_DHCR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return fapi2::putScom(i_target, CPMS_DHCR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}


static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_FREEZE_HISTORY_ON_LARGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_FREEZE_HISTORY_ON_LARGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_FREEZE_HISTORY_ON_LARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_FREEZE_HISTORY_ON_LARGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_FREEZE_HISTORY_ON_LARGE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_FREEZE_HISTORY_ON_LARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_FREEZE_HISTORY_ON_LARGE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.setBit<CPMS_DHCR_FREEZE_HISTORY_ON_LARGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_FREEZE_HISTORY_ON_LARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DHCR_FREEZE_HISTORY_ON_LARGE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.clearBit<CPMS_DHCR_FREEZE_HISTORY_ON_LARGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_FREEZE_HISTORY_ON_LARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_DHCR_FREEZE_HISTORY_ON_LARGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.extractToRight<CPMS_DHCR_FREEZE_HISTORY_ON_LARGE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_FREEZE_HISTORY_ON_LARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_DHCR_FREEZE_HISTORY_ON_LARGE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.getBit<CPMS_DHCR_FREEZE_HISTORY_ON_LARGE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_FREEZE_HISTORY_ON_LARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.setBit<CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.clearBit<CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.extractToRight<CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.getBit<CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_RESET_DHDR_ON_FDIR_WRITE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_ADJACENT_WARN_RECORD_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_ADJACENT_WARN_RECORD_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_ADJACENT_WARN_RECORD_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_ADJACENT_WARN_RECORD_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_ADJACENT_WARN_RECORD_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_ADJACENT_WARN_RECORD_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_ADJACENT_WARN_RECORD_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.setBit<CPMS_DHCR_ADJACENT_WARN_RECORD_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_ADJACENT_WARN_RECORD_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& CLEAR_CPMS_DHCR_ADJACENT_WARN_RECORD_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.clearBit<CPMS_DHCR_ADJACENT_WARN_RECORD_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_ADJACENT_WARN_RECORD_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_DHCR_ADJACENT_WARN_RECORD_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.extractToRight<CPMS_DHCR_ADJACENT_WARN_RECORD_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_ADJACENT_WARN_RECORD_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline bool GET_CPMS_DHCR_ADJACENT_WARN_RECORD_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.getBit<CPMS_DHCR_ADJACENT_WARN_RECORD_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_ADJACENT_WARN_RECORD_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_SPARE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_SPARE,
           CPMS_DHCR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_SPARE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_SPARE,
           CPMS_DHCR_SPARE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_DHCR_SPARE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.extractToRight<CPMS_DHCR_SPARE,
           CPMS_DHCR_SPARE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_SPARE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_EVENT_HISTORY_SELECT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_EVENT_HISTORY_SELECT,
           CPMS_DHCR_EVENT_HISTORY_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_EVENT_HISTORY_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_EVENT_HISTORY_SELECT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_EVENT_HISTORY_SELECT,
           CPMS_DHCR_EVENT_HISTORY_SELECT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_EVENT_HISTORY_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_DHCR_EVENT_HISTORY_SELECT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.extractToRight<CPMS_DHCR_EVENT_HISTORY_SELECT,
           CPMS_DHCR_EVENT_HISTORY_SELECT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_EVENT_HISTORY_SELECT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_EVENT_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_EVENT_COUNT,
           CPMS_DHCR_EVENT_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_EVENT_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& SET_CPMS_DHCR_EVENT_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return o_data.insertFromRight<CPMS_DHCR_EVENT_COUNT,
           CPMS_DHCR_EVENT_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_EVENT_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}

static inline fapi2::buffer<uint64_t>& GET_CPMS_DHCR_EVENT_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CPMS_DHCR));
#endif
    return i_data.extractToRight<CPMS_DHCR_EVENT_COUNT,
           CPMS_DHCR_EVENT_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("Invalid dial access CPMS_DHCR_EVENT_COUNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}


#ifndef __PPE_HCODE__
}
}

#endif
#endif
