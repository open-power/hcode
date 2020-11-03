/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pec/reg00011_unused.H $       */
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

#ifndef __PEC_REG00011_H_UNUSED__
#define __PEC_REG00011_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> PREP_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_MODE_REG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_DBG_TRACE_MODE_REG_2]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_DBG_TRACE_MODE_REG_2;
#endif
    return fapi2::getScom(i_target, EPS_DBG_TRACE_MODE_REG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2]

//>> PUT_[EPS_DBG_TRACE_MODE_REG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_DBG_TRACE_MODE_REG_2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return fapi2::putScom(i_target, EPS_DBG_TRACE_MODE_REG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_DBG_TRACE_MODE_REG_2]


//>> SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE,
           EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_RUNN_COUNT_COMPARE_VALUE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_IMM_FREEZE_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_STOP_ON_ERR]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_BANK_ON_RUNN_MATCH]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FORCE_TEST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_ACCUM_HIST_MODE]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.setBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.clearBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]
static inline bool GET_EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.getBit<EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_FRZ_COUNT_ON]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& SET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return o_data.insertFromRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> GET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]
static inline fapi2::buffer<uint64_t>& GET_EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_DBG_TRACE_MODE_REG_2));
#endif
    return i_data.extractToRight<EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK,
           EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_DBG_TRACE_MODE_REG_2_EXTEND_BANK]

//>> PREP_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]

//>> GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG;
#endif
    return fapi2::getScom(i_target, PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]

//>> PUT_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return fapi2::putScom(i_target, PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG]


//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0,
           PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0]

//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0,
           PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0]

//>> GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0,
           PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK0]

//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1,
           PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1]

//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1,
           PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1]

//>> GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1,
           PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_STK1]

//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]

//>> CLEAR_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]

//>> GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]

//>> GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]
static inline bool GET_PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NSTQSTKOVR_REG_ENABLE]

//>> PREP_[TOP0_IOPFIRMASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_IOPFIRMASK_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIRMASK_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_IOPFIRMASK_RW]

//>> GET_[TOP0_IOPFIRMASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_IOPFIRMASK_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIRMASK_RW;
#endif
    return fapi2::getScom(i_target, TOP0_IOPFIRMASK_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_RW]

//>> PUT_[TOP0_IOPFIRMASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_IOPFIRMASK_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, TOP0_IOPFIRMASK_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_IOPFIRMASK_RW]

//>> PREP_[TOP0_IOPFIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_IOPFIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIRMASK_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_IOPFIRMASK_WO_AND]

//>> GET_[TOP0_IOPFIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_IOPFIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIRMASK_WO_AND;
#endif
    return fapi2::getScom(i_target, TOP0_IOPFIRMASK_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_WO_AND]

//>> PUT_[TOP0_IOPFIRMASK_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_IOPFIRMASK_WO_AND(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, TOP0_IOPFIRMASK_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_IOPFIRMASK_WO_AND]

//>> PREP_[TOP0_IOPFIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP0_IOPFIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIRMASK_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP0_IOPFIRMASK_WO_OR]

//>> GET_[TOP0_IOPFIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP0_IOPFIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP0_IOPFIRMASK_WO_OR;
#endif
    return fapi2::getScom(i_target, TOP0_IOPFIRMASK_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_WO_OR]

//>> PUT_[TOP0_IOPFIRMASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP0_IOPFIRMASK_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return fapi2::putScom(i_target, TOP0_IOPFIRMASK_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP0_IOPFIRMASK_WO_OR]


//>> SET_[TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK]

//>> CLEAR_[TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK]

//>> GET_[TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK]

//>> GET_[TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK]
static inline bool GET_TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_PHY0_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK]

//>> CLEAR_[TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK]

//>> GET_[TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK]

//>> GET_[TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK]
static inline bool GET_TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_PHY0_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK]

//>> CLEAR_[TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK]

//>> GET_[TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK]

//>> GET_[TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK]
static inline bool GET_TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_PHY1_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK]

//>> CLEAR_[TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK]

//>> GET_[TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK]

//>> GET_[TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK]
static inline bool GET_TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_PHY1_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK]

//>> CLEAR_[TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK]
static inline bool GET_TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCOM0_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK]

//>> CLEAR_[TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK]
static inline bool GET_TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCOM0_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK]

//>> CLEAR_[TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK]
static inline bool GET_TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCOM1_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK]

//>> CLEAR_[TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK]
static inline bool GET_TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCOM1_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK]

//>> CLEAR_[TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK]
static inline bool GET_TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCRUB0_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK]

//>> CLEAR_[TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK]
static inline bool GET_TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCRUB0_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK]

//>> CLEAR_[TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK]
static inline bool GET_TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCRUB1_ECC_CE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.insertFromRight<TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK]

//>> SET_[TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.setBit<TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK]

//>> CLEAR_[TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return o_data.clearBit<TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.extractToRight<TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK]

//>> GET_[TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK]
static inline bool GET_TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP0_IOPFIRMASK_RW, TOP0_IOPFIRMASK_WO_AND, TOP0_IOPFIRMASK_WO_OR));
#endif
    return i_data.getBit<TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP0_IOPFIRMASK_SCRUB1_ECC_UE_MASK]

//>> PREP_[TOP1_IOPFIR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_IOPFIR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IOPFIR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_IOPFIR_RW]

//>> GET_[TOP1_IOPFIR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_IOPFIR_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IOPFIR_RW;
#endif
    return fapi2::getScom(i_target, TOP1_IOPFIR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_IOPFIR_RW]

//>> PUT_[TOP1_IOPFIR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_IOPFIR_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, TOP1_IOPFIR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_IOPFIR_RW]

//>> PREP_[TOP1_IOPFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_IOPFIR_WO_AND(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IOPFIR_WO_AND;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_IOPFIR_WO_AND]

//>> GET_[TOP1_IOPFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_IOPFIR_WO_AND(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IOPFIR_WO_AND;
#endif
    return fapi2::getScom(i_target, TOP1_IOPFIR_WO_AND, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_IOPFIR_WO_AND]

//>> PUT_[TOP1_IOPFIR_WO_AND]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_IOPFIR_WO_AND(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, TOP1_IOPFIR_WO_AND, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_IOPFIR_WO_AND]

//>> PREP_[TOP1_IOPFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_IOPFIR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IOPFIR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_IOPFIR_WO_OR]

//>> GET_[TOP1_IOPFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_IOPFIR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IOPFIR_WO_OR;
#endif
    return fapi2::getScom(i_target, TOP1_IOPFIR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_IOPFIR_WO_OR]

//>> PUT_[TOP1_IOPFIR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_IOPFIR_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return fapi2::putScom(i_target, TOP1_IOPFIR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_IOPFIR_WO_OR]


//>> SET_[TOP1_IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_PHY0_ECC_CE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_PHY0_ECC_CE_ERR]

//>> SET_[TOP1_IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_PHY0_ECC_CE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_PHY0_ECC_CE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_PHY0_ECC_CE_ERR]

//>> SET_[TOP1_IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP1_IOPFIR_PHY0_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_PHY0_ECC_CE_ERR]

//>> CLEAR_[TOP1_IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP1_IOPFIR_PHY0_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IOPFIR_PHY0_ECC_CE_ERR]

//>> GET_[TOP1_IOPFIR_PHY0_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP1_IOPFIR_PHY0_ECC_CE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_PHY0_ECC_CE_ERR]

//>> GET_[TOP1_IOPFIR_PHY0_ECC_CE_ERR]
static inline bool GET_TOP1_IOPFIR_PHY0_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP1_IOPFIR_PHY0_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IOPFIR_PHY0_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_PHY0_ECC_CE_ERR]

//>> SET_[TOP1_IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_PHY0_ECC_UE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_PHY0_ECC_UE_ERR]

//>> SET_[TOP1_IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_PHY0_ECC_UE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_PHY0_ECC_UE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_PHY0_ECC_UE_ERR]

//>> SET_[TOP1_IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP1_IOPFIR_PHY0_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_PHY0_ECC_UE_ERR]

//>> CLEAR_[TOP1_IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP1_IOPFIR_PHY0_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IOPFIR_PHY0_ECC_UE_ERR]

//>> GET_[TOP1_IOPFIR_PHY0_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP1_IOPFIR_PHY0_ECC_UE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_PHY0_ECC_UE_ERR]

//>> GET_[TOP1_IOPFIR_PHY0_ECC_UE_ERR]
static inline bool GET_TOP1_IOPFIR_PHY0_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP1_IOPFIR_PHY0_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IOPFIR_PHY0_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_PHY0_ECC_UE_ERR]

//>> SET_[TOP1_IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_PHY1_ECC_CE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_PHY1_ECC_CE_ERR]

//>> SET_[TOP1_IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_PHY1_ECC_CE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_PHY1_ECC_CE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_PHY1_ECC_CE_ERR]

//>> SET_[TOP1_IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP1_IOPFIR_PHY1_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_PHY1_ECC_CE_ERR]

//>> CLEAR_[TOP1_IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP1_IOPFIR_PHY1_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IOPFIR_PHY1_ECC_CE_ERR]

//>> GET_[TOP1_IOPFIR_PHY1_ECC_CE_ERR]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP1_IOPFIR_PHY1_ECC_CE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_PHY1_ECC_CE_ERR]

//>> GET_[TOP1_IOPFIR_PHY1_ECC_CE_ERR]
static inline bool GET_TOP1_IOPFIR_PHY1_ECC_CE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP1_IOPFIR_PHY1_ECC_CE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IOPFIR_PHY1_ECC_CE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_PHY1_ECC_CE_ERR]

//>> SET_[TOP1_IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_PHY1_ECC_UE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_PHY1_ECC_UE_ERR]

//>> SET_[TOP1_IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_PHY1_ECC_UE_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_PHY1_ECC_UE_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_PHY1_ECC_UE_ERR]

//>> SET_[TOP1_IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP1_IOPFIR_PHY1_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_PHY1_ECC_UE_ERR]

//>> CLEAR_[TOP1_IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP1_IOPFIR_PHY1_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IOPFIR_PHY1_ECC_UE_ERR]

//>> GET_[TOP1_IOPFIR_PHY1_ECC_UE_ERR]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP1_IOPFIR_PHY1_ECC_UE_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_PHY1_ECC_UE_ERR]

//>> GET_[TOP1_IOPFIR_PHY1_ECC_UE_ERR]
static inline bool GET_TOP1_IOPFIR_PHY1_ECC_UE_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP1_IOPFIR_PHY1_ECC_UE_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IOPFIR_PHY1_ECC_UE_ERR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_PHY1_ECC_UE_ERR]

//>> SET_[TOP1_IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCOM0_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCOM0_ECC_CE]

//>> SET_[TOP1_IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCOM0_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCOM0_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCOM0_ECC_CE]

//>> SET_[TOP1_IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP1_IOPFIR_SCOM0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCOM0_ECC_CE]

//>> CLEAR_[TOP1_IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP1_IOPFIR_SCOM0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IOPFIR_SCOM0_ECC_CE]

//>> GET_[TOP1_IOPFIR_SCOM0_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP1_IOPFIR_SCOM0_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCOM0_ECC_CE]

//>> GET_[TOP1_IOPFIR_SCOM0_ECC_CE]
static inline bool GET_TOP1_IOPFIR_SCOM0_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP1_IOPFIR_SCOM0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IOPFIR_SCOM0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCOM0_ECC_CE]

//>> SET_[TOP1_IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCOM0_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCOM0_ECC_UE]

//>> SET_[TOP1_IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCOM0_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCOM0_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCOM0_ECC_UE]

//>> SET_[TOP1_IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP1_IOPFIR_SCOM0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCOM0_ECC_UE]

//>> CLEAR_[TOP1_IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP1_IOPFIR_SCOM0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IOPFIR_SCOM0_ECC_UE]

//>> GET_[TOP1_IOPFIR_SCOM0_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP1_IOPFIR_SCOM0_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCOM0_ECC_UE]

//>> GET_[TOP1_IOPFIR_SCOM0_ECC_UE]
static inline bool GET_TOP1_IOPFIR_SCOM0_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP1_IOPFIR_SCOM0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IOPFIR_SCOM0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCOM0_ECC_UE]

//>> SET_[TOP1_IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCOM1_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCOM1_ECC_CE]

//>> SET_[TOP1_IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCOM1_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCOM1_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCOM1_ECC_CE]

//>> SET_[TOP1_IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP1_IOPFIR_SCOM1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCOM1_ECC_CE]

//>> CLEAR_[TOP1_IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP1_IOPFIR_SCOM1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IOPFIR_SCOM1_ECC_CE]

//>> GET_[TOP1_IOPFIR_SCOM1_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP1_IOPFIR_SCOM1_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCOM1_ECC_CE]

//>> GET_[TOP1_IOPFIR_SCOM1_ECC_CE]
static inline bool GET_TOP1_IOPFIR_SCOM1_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP1_IOPFIR_SCOM1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IOPFIR_SCOM1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCOM1_ECC_CE]

//>> SET_[TOP1_IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCOM1_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCOM1_ECC_UE]

//>> SET_[TOP1_IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCOM1_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCOM1_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCOM1_ECC_UE]

//>> SET_[TOP1_IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP1_IOPFIR_SCOM1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCOM1_ECC_UE]

//>> CLEAR_[TOP1_IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP1_IOPFIR_SCOM1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IOPFIR_SCOM1_ECC_UE]

//>> GET_[TOP1_IOPFIR_SCOM1_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP1_IOPFIR_SCOM1_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCOM1_ECC_UE]

//>> GET_[TOP1_IOPFIR_SCOM1_ECC_UE]
static inline bool GET_TOP1_IOPFIR_SCOM1_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP1_IOPFIR_SCOM1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IOPFIR_SCOM1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCOM1_ECC_UE]

//>> SET_[TOP1_IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCRUB0_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCRUB0_ECC_CE]

//>> SET_[TOP1_IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCRUB0_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCRUB0_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCRUB0_ECC_CE]

//>> SET_[TOP1_IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP1_IOPFIR_SCRUB0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCRUB0_ECC_CE]

//>> CLEAR_[TOP1_IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP1_IOPFIR_SCRUB0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IOPFIR_SCRUB0_ECC_CE]

//>> GET_[TOP1_IOPFIR_SCRUB0_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP1_IOPFIR_SCRUB0_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCRUB0_ECC_CE]

//>> GET_[TOP1_IOPFIR_SCRUB0_ECC_CE]
static inline bool GET_TOP1_IOPFIR_SCRUB0_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP1_IOPFIR_SCRUB0_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB0_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCRUB0_ECC_CE]

//>> SET_[TOP1_IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCRUB0_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCRUB0_ECC_UE]

//>> SET_[TOP1_IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCRUB0_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCRUB0_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCRUB0_ECC_UE]

//>> SET_[TOP1_IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP1_IOPFIR_SCRUB0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCRUB0_ECC_UE]

//>> CLEAR_[TOP1_IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP1_IOPFIR_SCRUB0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IOPFIR_SCRUB0_ECC_UE]

//>> GET_[TOP1_IOPFIR_SCRUB0_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP1_IOPFIR_SCRUB0_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCRUB0_ECC_UE]

//>> GET_[TOP1_IOPFIR_SCRUB0_ECC_UE]
static inline bool GET_TOP1_IOPFIR_SCRUB0_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP1_IOPFIR_SCRUB0_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB0_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCRUB0_ECC_UE]

//>> SET_[TOP1_IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCRUB1_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCRUB1_ECC_CE]

//>> SET_[TOP1_IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCRUB1_ECC_CE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCRUB1_ECC_CE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCRUB1_ECC_CE]

//>> SET_[TOP1_IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP1_IOPFIR_SCRUB1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCRUB1_ECC_CE]

//>> CLEAR_[TOP1_IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP1_IOPFIR_SCRUB1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IOPFIR_SCRUB1_ECC_CE]

//>> GET_[TOP1_IOPFIR_SCRUB1_ECC_CE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP1_IOPFIR_SCRUB1_ECC_CE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCRUB1_ECC_CE]

//>> GET_[TOP1_IOPFIR_SCRUB1_ECC_CE]
static inline bool GET_TOP1_IOPFIR_SCRUB1_ECC_CE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP1_IOPFIR_SCRUB1_ECC_CE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB1_ECC_CE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCRUB1_ECC_CE]

//>> SET_[TOP1_IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCRUB1_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCRUB1_ECC_UE]

//>> SET_[TOP1_IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCRUB1_ECC_UE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.insertFromRight<TOP1_IOPFIR_SCRUB1_ECC_UE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCRUB1_ECC_UE]

//>> SET_[TOP1_IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.setBit<TOP1_IOPFIR_SCRUB1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IOPFIR_SCRUB1_ECC_UE]

//>> CLEAR_[TOP1_IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& CLEAR_TOP1_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return o_data.clearBit<TOP1_IOPFIR_SCRUB1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TOP1_IOPFIR_SCRUB1_ECC_UE]

//>> GET_[TOP1_IOPFIR_SCRUB1_ECC_UE]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.extractToRight<TOP1_IOPFIR_SCRUB1_ECC_UE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCRUB1_ECC_UE]

//>> GET_[TOP1_IOPFIR_SCRUB1_ECC_UE]
static inline bool GET_TOP1_IOPFIR_SCRUB1_ECC_UE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IOPFIR_RW, TOP1_IOPFIR_WO_AND, TOP1_IOPFIR_WO_OR));
#endif
    return i_data.getBit<TOP1_IOPFIR_SCRUB1_ECC_UE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TOP1_IOPFIR_SCRUB1_ECC_UE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IOPFIR_SCRUB1_ECC_UE]

//>> PREP_[TOP1_IXDATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_IXDATA1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IXDATA1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_IXDATA1]

//>> GET_[TOP1_IXDATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_IXDATA1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IXDATA1;
#endif
    return fapi2::getScom(i_target, TOP1_IXDATA1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_IXDATA1]

//>> PUT_[TOP1_IXDATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_IXDATA1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_IXDATA1));
#endif
    return fapi2::putScom(i_target, TOP1_IXDATA1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_IXDATA1]


//>> SET_[TOP1_IXDATA1_IXDATA1_DATA]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXDATA1_IXDATA1_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXDATA1));
#endif
    return o_data.insertFromRight<TOP1_IXDATA1_IXDATA1_DATA,
           TOP1_IXDATA1_IXDATA1_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXDATA1_IXDATA1_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXDATA1_IXDATA1_DATA]

//>> SET_[TOP1_IXDATA1_IXDATA1_DATA]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXDATA1_IXDATA1_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXDATA1));
#endif
    return o_data.insertFromRight<TOP1_IXDATA1_IXDATA1_DATA,
           TOP1_IXDATA1_IXDATA1_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXDATA1_IXDATA1_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXDATA1_IXDATA1_DATA]

//>> GET_[TOP1_IXDATA1_IXDATA1_DATA]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXDATA1_IXDATA1_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXDATA1));
#endif
    return i_data.extractToRight<TOP1_IXDATA1_IXDATA1_DATA,
           TOP1_IXDATA1_IXDATA1_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXDATA1_IXDATA1_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXDATA1_IXDATA1_DATA]

//>> PREP_[TOP1_IXRADR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TOP1_IXRADR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IXRADR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TOP1_IXRADR1]

//>> GET_[TOP1_IXRADR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TOP1_IXRADR1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TOP1_IXRADR1;
#endif
    return fapi2::getScom(i_target, TOP1_IXRADR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TOP1_IXRADR1]

//>> PUT_[TOP1_IXRADR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TOP1_IXRADR1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TOP1_IXRADR1));
#endif
    return fapi2::putScom(i_target, TOP1_IXRADR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TOP1_IXRADR1]


//>> SET_[TOP1_IXRADR1_IXRADR1_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXRADR1_IXRADR1_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXRADR1));
#endif
    return o_data.insertFromRight<TOP1_IXRADR1_IXRADR1_ADDR,
           TOP1_IXRADR1_IXRADR1_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TOP1_IXRADR1_IXRADR1_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXRADR1_IXRADR1_ADDR]

//>> SET_[TOP1_IXRADR1_IXRADR1_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TOP1_IXRADR1_IXRADR1_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXRADR1));
#endif
    return o_data.insertFromRight<TOP1_IXRADR1_IXRADR1_ADDR,
           TOP1_IXRADR1_IXRADR1_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TOP1_IXRADR1_IXRADR1_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TOP1_IXRADR1_IXRADR1_ADDR]

//>> GET_[TOP1_IXRADR1_IXRADR1_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TOP1_IXRADR1_IXRADR1_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TOP1_IXRADR1));
#endif
    return i_data.extractToRight<TOP1_IXRADR1_IXRADR1_ADDR,
           TOP1_IXRADR1_IXRADR1_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TOP1_IXRADR1_IXRADR1_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TOP1_IXRADR1_IXRADR1_ADDR]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
