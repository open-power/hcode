/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pec/reg00014_unused.H $       */
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

#ifndef __PEC_REG00014_H_UNUSED__
#define __PEC_REG00014_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_DO chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_WAITN chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION1_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CONDITION2_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_C2_TIMEOUT_ACTION_BANK chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_1_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_LT chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
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
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_REG_1_2_CHECKSTOP_MODE_SELECTOR]

//>> PREP_[PB_PBCQ_PEPBREGS_ADDREXTMASK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PBCQ_PEPBREGS_ADDREXTMASK_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_ADDREXTMASK_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PBCQ_PEPBREGS_ADDREXTMASK_REG]

//>> GET_[PB_PBCQ_PEPBREGS_ADDREXTMASK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PBCQ_PEPBREGS_ADDREXTMASK_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_ADDREXTMASK_REG;
#endif
    return fapi2::getScom(i_target, PB_PBCQ_PEPBREGS_ADDREXTMASK_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_ADDREXTMASK_REG]

//>> PUT_[PB_PBCQ_PEPBREGS_ADDREXTMASK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PBCQ_PEPBREGS_ADDREXTMASK_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_ADDREXTMASK_REG));
#endif
    return fapi2::putScom(i_target, PB_PBCQ_PEPBREGS_ADDREXTMASK_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PBCQ_PEPBREGS_ADDREXTMASK_REG]


//>> SET_[PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_ADDREXTMASK_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK,
           PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK]

//>> SET_[PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_ADDREXTMASK_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK,
           PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK]

//>> GET_[PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_ADDREXTMASK_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK,
           PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_ADDREXTMASK_REG_PE_ADDREXTMASK]

//>> PREP_[TOP0_IOPFIRACT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_IOPFIRACT0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIRACT0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_IOPFIRACT0]

//>> GET_[TOP0_IOPFIRACT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_IOPFIRACT0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIRACT0;
#endif
    return fapi2::getScom(i_target, TOP0_IOPFIRACT0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_IOPFIRACT0]

//>> PUT_[TOP0_IOPFIRACT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_IOPFIRACT0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRACT0));
#endif
    return fapi2::putScom(i_target, TOP0_IOPFIRACT0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_IOPFIRACT0]


//>> SET_[TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRACT0));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0,
           TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0]

//>> SET_[TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRACT0));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0,
           TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0]

//>> GET_[TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRACT0));
#endif
    return i_data.extractToRight<TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0,
           TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRACT0_IOPFIRACT0_FIR_ACTION0]

//>> PREP_[TOP0_IXDATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_IXDATA0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IXDATA0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_IXDATA0]

//>> GET_[TOP0_IXDATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_IXDATA0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IXDATA0;
#endif
    return fapi2::getScom(i_target, TOP0_IXDATA0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_IXDATA0]

//>> PUT_[TOP0_IXDATA0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_IXDATA0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_IXDATA0));
#endif
    return fapi2::putScom(i_target, TOP0_IXDATA0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_IXDATA0]


//>> SET_[TOP0_IXDATA0_IXDATA0_DATA]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXDATA0_IXDATA0_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXDATA0));
#endif
    return o_data.insertFromRight<TOP0_IXDATA0_IXDATA0_DATA,
           TOP0_IXDATA0_IXDATA0_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXDATA0_IXDATA0_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXDATA0_IXDATA0_DATA]

//>> SET_[TOP0_IXDATA0_IXDATA0_DATA]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXDATA0_IXDATA0_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXDATA0));
#endif
    return o_data.insertFromRight<TOP0_IXDATA0_IXDATA0_DATA,
           TOP0_IXDATA0_IXDATA0_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXDATA0_IXDATA0_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXDATA0_IXDATA0_DATA]

//>> GET_[TOP0_IXDATA0_IXDATA0_DATA]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXDATA0_IXDATA0_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXDATA0));
#endif
    return i_data.extractToRight<TOP0_IXDATA0_IXDATA0_DATA,
           TOP0_IXDATA0_IXDATA0_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXDATA0_IXDATA0_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXDATA0_IXDATA0_DATA]

//>> PREP_[TOP0_IXRADR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_IXRADR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IXRADR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_IXRADR0]

//>> GET_[TOP0_IXRADR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_IXRADR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IXRADR0;
#endif
    return fapi2::getScom(i_target, TOP0_IXRADR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_IXRADR0]

//>> PUT_[TOP0_IXRADR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_IXRADR0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_IXRADR0));
#endif
    return fapi2::putScom(i_target, TOP0_IXRADR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_IXRADR0]


//>> SET_[TOP0_IXRADR0_IXRADR0_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXRADR0_IXRADR0_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXRADR0));
#endif
    return o_data.insertFromRight<TOP0_IXRADR0_IXRADR0_ADDR,
           TOP0_IXRADR0_IXRADR0_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IXRADR0_IXRADR0_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXRADR0_IXRADR0_ADDR]

//>> SET_[TOP0_IXRADR0_IXRADR0_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IXRADR0_IXRADR0_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXRADR0));
#endif
    return o_data.insertFromRight<TOP0_IXRADR0_IXRADR0_ADDR,
           TOP0_IXRADR0_IXRADR0_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IXRADR0_IXRADR0_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IXRADR0_IXRADR0_ADDR]

//>> GET_[TOP0_IXRADR0_IXRADR0_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IXRADR0_IXRADR0_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IXRADR0));
#endif
    return i_data.extractToRight<TOP0_IXRADR0_IXRADR0_ADDR,
           TOP0_IXRADR0_IXRADR0_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IXRADR0_IXRADR0_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IXRADR0_IXRADR0_ADDR]

//>> PREP_[TOP1_IXMODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_IXMODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IXMODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_IXMODE]

//>> GET_[TOP1_IXMODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_IXMODE(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IXMODE;
#endif
    return fapi2::getScom(i_target, TOP1_IXMODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_IXMODE]

//>> PUT_[TOP1_IXMODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_IXMODE(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return fapi2::putScom(i_target, TOP1_IXMODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_IXMODE]


//>> SET_[TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE]

//>> SET_[TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE]

//>> SET_[TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.setBit<TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE]

//>> CLEAR_[TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.clearBit<TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE]

//>> GET_[TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.extractToRight<TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE]

//>> GET_[TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE]
static inline bool GET_TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.getBit<TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY0_SRAM_EXT_LD_DONE]

//>> SET_[TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE]

//>> SET_[TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE]

//>> SET_[TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.setBit<TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE]

//>> CLEAR_[TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.clearBit<TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE]

//>> GET_[TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.extractToRight<TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE]

//>> GET_[TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE]
static inline bool GET_TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.getBit<TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY1_SRAM_EXT_LD_DONE]

//>> SET_[TOP1_IXMODE_RAM_SCOM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_RAM_SCOM_ACCESS_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_RAM_SCOM_ACCESS_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXMODE_RAM_SCOM_ACCESS_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_RAM_SCOM_ACCESS_MODE]

//>> SET_[TOP1_IXMODE_RAM_SCOM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_RAM_SCOM_ACCESS_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_RAM_SCOM_ACCESS_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXMODE_RAM_SCOM_ACCESS_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_RAM_SCOM_ACCESS_MODE]

//>> SET_[TOP1_IXMODE_RAM_SCOM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_RAM_SCOM_ACCESS_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.setBit<TOP1_IXMODE_RAM_SCOM_ACCESS_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXMODE_RAM_SCOM_ACCESS_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_RAM_SCOM_ACCESS_MODE]

//>> CLEAR_[TOP1_IXMODE_RAM_SCOM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXMODE_RAM_SCOM_ACCESS_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.clearBit<TOP1_IXMODE_RAM_SCOM_ACCESS_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXMODE_RAM_SCOM_ACCESS_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXMODE_RAM_SCOM_ACCESS_MODE]

//>> GET_[TOP1_IXMODE_RAM_SCOM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXMODE_RAM_SCOM_ACCESS_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.extractToRight<TOP1_IXMODE_RAM_SCOM_ACCESS_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXMODE_RAM_SCOM_ACCESS_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_RAM_SCOM_ACCESS_MODE]

//>> GET_[TOP1_IXMODE_RAM_SCOM_ACCESS_MODE]
static inline bool GET_TOP1_IXMODE_RAM_SCOM_ACCESS_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.getBit<TOP1_IXMODE_RAM_SCOM_ACCESS_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXMODE_RAM_SCOM_ACCESS_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_RAM_SCOM_ACCESS_MODE]

//>> SET_[TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE]

//>> SET_[TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE]

//>> SET_[TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.setBit<TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE]

//>> CLEAR_[TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.clearBit<TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE]

//>> GET_[TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.extractToRight<TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE]

//>> GET_[TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE]
static inline bool GET_TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.getBit<TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_RAM_SCOM_AUTOINC_RW_MODE]

//>> SET_[TOP1_IXMODE_SCRUB_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_SCRUB_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_SCRUB_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXMODE_SCRUB_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_SCRUB_EN]

//>> SET_[TOP1_IXMODE_SCRUB_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_SCRUB_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_SCRUB_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXMODE_SCRUB_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_SCRUB_EN]

//>> SET_[TOP1_IXMODE_SCRUB_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_SCRUB_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.setBit<TOP1_IXMODE_SCRUB_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXMODE_SCRUB_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_SCRUB_EN]

//>> CLEAR_[TOP1_IXMODE_SCRUB_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXMODE_SCRUB_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.clearBit<TOP1_IXMODE_SCRUB_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXMODE_SCRUB_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXMODE_SCRUB_EN]

//>> GET_[TOP1_IXMODE_SCRUB_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXMODE_SCRUB_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.extractToRight<TOP1_IXMODE_SCRUB_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXMODE_SCRUB_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_SCRUB_EN]

//>> GET_[TOP1_IXMODE_SCRUB_EN]
static inline bool GET_TOP1_IXMODE_SCRUB_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.getBit<TOP1_IXMODE_SCRUB_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXMODE_SCRUB_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_SCRUB_EN]

//>> SET_[TOP1_IXMODE_SCRUB_PERIOD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_SCRUB_PERIOD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_SCRUB_PERIOD,
           TOP1_IXMODE_SCRUB_PERIOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXMODE_SCRUB_PERIOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_SCRUB_PERIOD]

//>> SET_[TOP1_IXMODE_SCRUB_PERIOD]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_SCRUB_PERIOD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_SCRUB_PERIOD,
           TOP1_IXMODE_SCRUB_PERIOD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXMODE_SCRUB_PERIOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_SCRUB_PERIOD]

//>> GET_[TOP1_IXMODE_SCRUB_PERIOD]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXMODE_SCRUB_PERIOD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.extractToRight<TOP1_IXMODE_SCRUB_PERIOD,
           TOP1_IXMODE_SCRUB_PERIOD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXMODE_SCRUB_PERIOD chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_SCRUB_PERIOD]

//>> SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN]

//>> SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN]

//>> SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.setBit<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN]

//>> CLEAR_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.clearBit<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN]

//>> GET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.extractToRight<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN]

//>> GET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN]
static inline bool GET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.getBit<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_EN]

//>> SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE]

//>> SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE]

//>> SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.setBit<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE]

//>> CLEAR_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.clearBit<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE]

//>> GET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.extractToRight<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE]

//>> GET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE]
static inline bool GET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.getBit<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_TYPE]

//>> SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION]

//>> SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION]

//>> SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.setBit<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION]

//>> CLEAR_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.clearBit<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION]

//>> GET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.extractToRight<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION]

//>> GET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION]
static inline bool GET_TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.getBit<TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY0_ARRAY_ERR_INJ_ACTION]

//>> SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN]

//>> SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN]

//>> SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.setBit<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN]

//>> CLEAR_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.clearBit<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN]

//>> GET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.extractToRight<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN]

//>> GET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN]
static inline bool GET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.getBit<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_EN]

//>> SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE]

//>> SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE]

//>> SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.setBit<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE]

//>> CLEAR_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.clearBit<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE]

//>> GET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.extractToRight<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE]

//>> GET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE]
static inline bool GET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.getBit<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_TYPE]

//>> SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION]

//>> SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.insertFromRight<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION]

//>> SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.setBit<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION]

//>> CLEAR_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return o_data.clearBit<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION]

//>> GET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.extractToRight<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION]

//>> GET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION]
static inline bool GET_TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXMODE));
#endif
    return i_data.getBit<TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXMODE_PHY1_ARRAY_ERR_INJ_ACTION]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
