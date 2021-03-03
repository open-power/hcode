/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/omic/reg00008_unused.H $      */
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

#ifndef __OMIC_REG00008_H_UNUSED__
#define __OMIC_REG00008_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace omic
{
#endif


//>> PREP_[CTL_REGS_RX_MODE15_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CTL_REGS_RX_MODE15_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTL_REGS_RX_MODE15_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CTL_REGS_RX_MODE15_PG]

//>> GET_[CTL_REGS_RX_MODE15_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CTL_REGS_RX_MODE15_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTL_REGS_RX_MODE15_PG;
#endif
    return fapi2::getScom(i_target, CTL_REGS_RX_MODE15_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CTL_REGS_RX_MODE15_PG]

//>> PUT_[CTL_REGS_RX_MODE15_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CTL_REGS_RX_MODE15_PG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return fapi2::putScom(i_target, CTL_REGS_RX_MODE15_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CTL_REGS_RX_MODE15_PG]


//>> SET_[CTL_REGS_RX_MODE15_PG_0]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE15_PG_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE15_PG_0,
           CTL_REGS_RX_MODE15_PG_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access CTL_REGS_RX_MODE15_PG_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE15_PG_0]

//>> SET_[CTL_REGS_RX_MODE15_PG_0]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE15_PG_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE15_PG_0,
           CTL_REGS_RX_MODE15_PG_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access CTL_REGS_RX_MODE15_PG_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE15_PG_0]

//>> GET_[CTL_REGS_RX_MODE15_PG_0]
static inline fapi2::buffer<uint64_t>& GET_CTL_REGS_RX_MODE15_PG_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return i_data.extractToRight<CTL_REGS_RX_MODE15_PG_0,
           CTL_REGS_RX_MODE15_PG_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access CTL_REGS_RX_MODE15_PG_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE15_PG_0]

//>> SET_[CTL_REGS_RX_MODE15_PG_1]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE15_PG_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE15_PG_1,
           CTL_REGS_RX_MODE15_PG_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access CTL_REGS_RX_MODE15_PG_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE15_PG_1]

//>> SET_[CTL_REGS_RX_MODE15_PG_1]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE15_PG_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE15_PG_1,
           CTL_REGS_RX_MODE15_PG_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access CTL_REGS_RX_MODE15_PG_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE15_PG_1]

//>> GET_[CTL_REGS_RX_MODE15_PG_1]
static inline fapi2::buffer<uint64_t>& GET_CTL_REGS_RX_MODE15_PG_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return i_data.extractToRight<CTL_REGS_RX_MODE15_PG_1,
           CTL_REGS_RX_MODE15_PG_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access CTL_REGS_RX_MODE15_PG_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE15_PG_1]

//>> SET_[CTL_REGS_RX_MODE15_PG_2]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE15_PG_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE15_PG_2,
           CTL_REGS_RX_MODE15_PG_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access CTL_REGS_RX_MODE15_PG_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE15_PG_2]

//>> SET_[CTL_REGS_RX_MODE15_PG_2]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE15_PG_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE15_PG_2,
           CTL_REGS_RX_MODE15_PG_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access CTL_REGS_RX_MODE15_PG_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE15_PG_2]

//>> GET_[CTL_REGS_RX_MODE15_PG_2]
static inline fapi2::buffer<uint64_t>& GET_CTL_REGS_RX_MODE15_PG_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return i_data.extractToRight<CTL_REGS_RX_MODE15_PG_2,
           CTL_REGS_RX_MODE15_PG_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access CTL_REGS_RX_MODE15_PG_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE15_PG_2]

//>> SET_[CTL_REGS_RX_MODE15_PG_3]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE15_PG_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE15_PG_3,
           CTL_REGS_RX_MODE15_PG_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access CTL_REGS_RX_MODE15_PG_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE15_PG_3]

//>> SET_[CTL_REGS_RX_MODE15_PG_3]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_RX_MODE15_PG_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_RX_MODE15_PG_3,
           CTL_REGS_RX_MODE15_PG_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access CTL_REGS_RX_MODE15_PG_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_RX_MODE15_PG_3]

//>> GET_[CTL_REGS_RX_MODE15_PG_3]
static inline fapi2::buffer<uint64_t>& GET_CTL_REGS_RX_MODE15_PG_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_RX_MODE15_PG));
#endif
    return i_data.extractToRight<CTL_REGS_RX_MODE15_PG_3,
           CTL_REGS_RX_MODE15_PG_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access CTL_REGS_RX_MODE15_PG_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_RX_MODE15_PG_3]

//>> PREP_[CTL_REGS_TX_CNTL7_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CTL_REGS_TX_CNTL7_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTL_REGS_TX_CNTL7_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CTL_REGS_TX_CNTL7_PG]

//>> GET_[CTL_REGS_TX_CNTL7_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CTL_REGS_TX_CNTL7_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CTL_REGS_TX_CNTL7_PG;
#endif
    return fapi2::getScom(i_target, CTL_REGS_TX_CNTL7_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CTL_REGS_TX_CNTL7_PG]

//>> PUT_[CTL_REGS_TX_CNTL7_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CTL_REGS_TX_CNTL7_PG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CTL_REGS_TX_CNTL7_PG));
#endif
    return fapi2::putScom(i_target, CTL_REGS_TX_CNTL7_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CTL_REGS_TX_CNTL7_PG]


//>> SET_[CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_TX_CNTL7_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15,
           CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15]

//>> SET_[CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15]
static inline fapi2::buffer<uint64_t>& SET_CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_TX_CNTL7_PG));
#endif
    return o_data.insertFromRight<CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15,
           CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15]

//>> GET_[CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15]
static inline fapi2::buffer<uint64_t>& GET_CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CTL_REGS_TX_CNTL7_PG));
#endif
    return i_data.extractToRight<CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15,
           CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[CTL_REGS_TX_CNTL7_PG_TX_PATTERN_0_15]

//>> PREP_[DATASM_REGS_RX_CNT17_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DATASM_REGS_RX_CNT17_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_CNT17_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DATASM_REGS_RX_CNT17_PG]

//>> GET_[DATASM_REGS_RX_CNT17_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DATASM_REGS_RX_CNT17_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_CNT17_PG;
#endif
    return fapi2::getScom(i_target, DATASM_REGS_RX_CNT17_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DATASM_REGS_RX_CNT17_PG]

//>> PUT_[DATASM_REGS_RX_CNT17_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DATASM_REGS_RX_CNT17_PG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT17_PG));
#endif
    return fapi2::putScom(i_target, DATASM_REGS_RX_CNT17_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DATASM_REGS_RX_CNT17_PG]


//>> SET_[DATASM_REGS_RX_CNT17_PG_2]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNT17_PG_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT17_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNT17_PG_2,
           DATASM_REGS_RX_CNT17_PG_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access DATASM_REGS_RX_CNT17_PG_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNT17_PG_2]

//>> SET_[DATASM_REGS_RX_CNT17_PG_2]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNT17_PG_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT17_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNT17_PG_2,
           DATASM_REGS_RX_CNT17_PG_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access DATASM_REGS_RX_CNT17_PG_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNT17_PG_2]

//>> GET_[DATASM_REGS_RX_CNT17_PG_2]
static inline fapi2::buffer<uint64_t>& GET_DATASM_REGS_RX_CNT17_PG_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT17_PG));
#endif
    return i_data.extractToRight<DATASM_REGS_RX_CNT17_PG_2,
           DATASM_REGS_RX_CNT17_PG_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access DATASM_REGS_RX_CNT17_PG_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DATASM_REGS_RX_CNT17_PG_2]

//>> SET_[DATASM_REGS_RX_CNT17_PG_3]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNT17_PG_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT17_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNT17_PG_3,
           DATASM_REGS_RX_CNT17_PG_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access DATASM_REGS_RX_CNT17_PG_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNT17_PG_3]

//>> SET_[DATASM_REGS_RX_CNT17_PG_3]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNT17_PG_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT17_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNT17_PG_3,
           DATASM_REGS_RX_CNT17_PG_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access DATASM_REGS_RX_CNT17_PG_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNT17_PG_3]

//>> GET_[DATASM_REGS_RX_CNT17_PG_3]
static inline fapi2::buffer<uint64_t>& GET_DATASM_REGS_RX_CNT17_PG_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT17_PG));
#endif
    return i_data.extractToRight<DATASM_REGS_RX_CNT17_PG_3,
           DATASM_REGS_RX_CNT17_PG_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access DATASM_REGS_RX_CNT17_PG_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DATASM_REGS_RX_CNT17_PG_3]

//>> PREP_[DATASM_REGS_RX_CNT27_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DATASM_REGS_RX_CNT27_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_CNT27_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DATASM_REGS_RX_CNT27_PG]

//>> GET_[DATASM_REGS_RX_CNT27_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DATASM_REGS_RX_CNT27_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_CNT27_PG;
#endif
    return fapi2::getScom(i_target, DATASM_REGS_RX_CNT27_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DATASM_REGS_RX_CNT27_PG]

//>> PUT_[DATASM_REGS_RX_CNT27_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DATASM_REGS_RX_CNT27_PG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT27_PG));
#endif
    return fapi2::putScom(i_target, DATASM_REGS_RX_CNT27_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DATASM_REGS_RX_CNT27_PG]


//>> SET_[DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT27_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15,
           DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15]

//>> SET_[DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT27_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15,
           DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15]

//>> GET_[DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15]
static inline fapi2::buffer<uint64_t>& GET_DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNT27_PG));
#endif
    return i_data.extractToRight<DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15,
           DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DATASM_REGS_RX_CNT27_PG_RX_A_LANE_DONE_0_15]

//>> PREP_[DATASM_REGS_RX_CNTL4_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DATASM_REGS_RX_CNTL4_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_CNTL4_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DATASM_REGS_RX_CNTL4_PG]

//>> GET_[DATASM_REGS_RX_CNTL4_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DATASM_REGS_RX_CNTL4_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_CNTL4_PG;
#endif
    return fapi2::getScom(i_target, DATASM_REGS_RX_CNTL4_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DATASM_REGS_RX_CNTL4_PG]

//>> PUT_[DATASM_REGS_RX_CNTL4_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DATASM_REGS_RX_CNTL4_PG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNTL4_PG));
#endif
    return fapi2::putScom(i_target, DATASM_REGS_RX_CNTL4_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DATASM_REGS_RX_CNTL4_PG]


//>> SET_[DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNTL4_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL]

//>> SET_[DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNTL4_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL]

//>> SET_[DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNTL4_PG));
#endif
    return o_data.setBit<DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNTL4_PG));
#endif
    return o_data.clearBit<DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL]

//>> GET_[DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNTL4_PG));
#endif
    return i_data.extractToRight<DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL]

//>> GET_[DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_CNTL4_PG));
#endif
    return i_data.getBit<DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DATASM_REGS_RX_CNTL4_PG_RX_CLEAR_SERVO_QUEUES_WO_PULSE_SLOW_SIGNAL]

//>> PREP_[DATASM_REGS_RX_STAT4_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DATASM_REGS_RX_STAT4_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_STAT4_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DATASM_REGS_RX_STAT4_PG]

//>> GET_[DATASM_REGS_RX_STAT4_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DATASM_REGS_RX_STAT4_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DATASM_REGS_RX_STAT4_PG;
#endif
    return fapi2::getScom(i_target, DATASM_REGS_RX_STAT4_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DATASM_REGS_RX_STAT4_PG]

//>> PUT_[DATASM_REGS_RX_STAT4_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DATASM_REGS_RX_STAT4_PG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_STAT4_PG));
#endif
    return fapi2::putScom(i_target, DATASM_REGS_RX_STAT4_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DATASM_REGS_RX_STAT4_PG]


//>> SET_[DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_STAT4_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL,
           DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL]

//>> SET_[DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_STAT4_PG));
#endif
    return o_data.insertFromRight<DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL,
           DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL]

//>> GET_[DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DATASM_REGS_RX_STAT4_PG));
#endif
    return i_data.extractToRight<DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL,
           DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DATASM_REGS_RX_STAT4_PG_RX_DATA_PIPE_MAIN_0_15_RO_SIGNAL]

//>> PREP_[TX_CTL_SM_REGS_CTLSM_CNTL6_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TX_CTL_SM_REGS_CTLSM_CNTL6_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TX_CTL_SM_REGS_CTLSM_CNTL6_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TX_CTL_SM_REGS_CTLSM_CNTL6_PG]

//>> GET_[TX_CTL_SM_REGS_CTLSM_CNTL6_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TX_CTL_SM_REGS_CTLSM_CNTL6_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TX_CTL_SM_REGS_CTLSM_CNTL6_PG;
#endif
    return fapi2::getScom(i_target, TX_CTL_SM_REGS_CTLSM_CNTL6_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_CNTL6_PG]

//>> PUT_[TX_CTL_SM_REGS_CTLSM_CNTL6_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TX_CTL_SM_REGS_CTLSM_CNTL6_PG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_CNTL6_PG));
#endif
    return fapi2::putScom(i_target, TX_CTL_SM_REGS_CTLSM_CNTL6_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TX_CTL_SM_REGS_CTLSM_CNTL6_PG]


//>> SET_[TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_CNTL6_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0,
           TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0]

//>> SET_[TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_CNTL6_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0,
           TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0]

//>> GET_[TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_CNTL6_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0,
           TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_CNTL6_PG_TX_PSAVE_FORCE_REQ_16_23_0]

//>> PREP_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG;
#endif
    return fapi2::getScom(i_target, TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG]

//>> PUT_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return fapi2::putScom(i_target, TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG]


//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.setBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0]

//>> CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.clearBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0]
static inline bool GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.getBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_0]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.setBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1]

//>> CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.clearBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1]
static inline bool GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.getBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_1]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.setBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2]

//>> CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.clearBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2]
static inline bool GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.getBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_2]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.setBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3]

//>> CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.clearBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3]
static inline bool GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.getBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_3]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.setBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4]

//>> CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.clearBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4]
static inline bool GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.getBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_4]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.setBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5]

//>> CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.clearBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5]
static inline bool GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.getBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_5]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.setBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6]

//>> CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.clearBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6]
static inline bool GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.getBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_6]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7]

//>> SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.setBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7]

//>> CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return o_data.clearBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7]

//>> GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7]
static inline bool GET_TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG));
#endif
    return i_data.getBit<TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_SPARE_MODE_PG_7]

//>> PREP_[TX_CTL_SM_REGS_CTLSM_STAT6_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TX_CTL_SM_REGS_CTLSM_STAT6_PG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TX_CTL_SM_REGS_CTLSM_STAT6_PG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TX_CTL_SM_REGS_CTLSM_STAT6_PG]

//>> GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TX_CTL_SM_REGS_CTLSM_STAT6_PG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TX_CTL_SM_REGS_CTLSM_STAT6_PG;
#endif
    return fapi2::getScom(i_target, TX_CTL_SM_REGS_CTLSM_STAT6_PG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG]

//>> PUT_[TX_CTL_SM_REGS_CTLSM_STAT6_PG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TX_CTL_SM_REGS_CTLSM_STAT6_PG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return fapi2::putScom(i_target, TX_CTL_SM_REGS_CTLSM_STAT6_PG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TX_CTL_SM_REGS_CTLSM_STAT6_PG]


//>> SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL]

//>> SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL]

//>> SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.setBit<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL]

//>> CLEAR_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.clearBit<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL]

//>> GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL]

//>> GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL]
static inline bool GET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return i_data.getBit<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_DCC_FAIL]

//>> SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL]

//>> SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL]

//>> SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.setBit<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL]

//>> CLEAR_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.clearBit<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL]

//>> GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL]

//>> GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL]
static inline bool GET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return i_data.getBit<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_LS_FAIL]

//>> SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL]

//>> SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL]

//>> SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.setBit<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL]

//>> CLEAR_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.clearBit<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL]

//>> GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL]

//>> GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL]
static inline bool GET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return i_data.getBit<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_BIST_HS_FAIL]

//>> SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL]

//>> SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.insertFromRight<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL]

//>> SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.setBit<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL]

//>> CLEAR_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return o_data.clearBit<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL]

//>> GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return i_data.extractToRight<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL]

//>> GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL]
static inline bool GET_TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_CTL_SM_REGS_CTLSM_STAT6_PG));
#endif
    return i_data.getBit<TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_CTL_SM_REGS_CTLSM_STAT6_PG_TX_IREF_PARITYCHK_CLOCK_RO_SIGNAL]

//>> PREP_[TX_SYNC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TX_SYNC(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TX_SYNC;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TX_SYNC]

//>> GET_[TX_SYNC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TX_SYNC(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TX_SYNC;
#endif
    return fapi2::getScom(i_target, TX_SYNC, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TX_SYNC]

//>> PUT_[TX_SYNC]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TX_SYNC(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return fapi2::putScom(i_target, TX_SYNC, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TX_SYNC]


//>> SET_[TX_SYNC_ENA]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_ENA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_ENA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_SYNC_ENA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_ENA]

//>> SET_[TX_SYNC_ENA]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_ENA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_ENA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_SYNC_ENA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_ENA]

//>> SET_[TX_SYNC_ENA]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_ENA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.setBit<TX_SYNC_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_omic Invalid dial access TX_SYNC_ENA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_ENA]

//>> CLEAR_[TX_SYNC_ENA]
static inline fapi2::buffer<uint64_t>& CLEAR_TX_SYNC_ENA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.clearBit<TX_SYNC_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_omic Invalid dial access TX_SYNC_ENA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TX_SYNC_ENA]

//>> GET_[TX_SYNC_ENA]
static inline fapi2::buffer<uint64_t>& GET_TX_SYNC_ENA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return i_data.extractToRight<TX_SYNC_ENA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_SYNC_ENA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_SYNC_ENA]

//>> GET_[TX_SYNC_ENA]
static inline bool GET_TX_SYNC_ENA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return i_data.getBit<TX_SYNC_ENA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_omic Invalid dial access TX_SYNC_ENA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_SYNC_ENA]

//>> SET_[TX_SYNC_DL7_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL7_DELAY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL7_DELAY,
           TX_SYNC_DL7_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_SYNC_DL7_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL7_DELAY]

//>> SET_[TX_SYNC_DL7_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL7_DELAY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL7_DELAY,
           TX_SYNC_DL7_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_SYNC_DL7_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL7_DELAY]

//>> GET_[TX_SYNC_DL7_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TX_SYNC_DL7_DELAY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return i_data.extractToRight<TX_SYNC_DL7_DELAY,
           TX_SYNC_DL7_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_SYNC_DL7_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_SYNC_DL7_DELAY]

//>> SET_[TX_SYNC_DL6_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL6_DELAY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL6_DELAY,
           TX_SYNC_DL6_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_SYNC_DL6_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL6_DELAY]

//>> SET_[TX_SYNC_DL6_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL6_DELAY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL6_DELAY,
           TX_SYNC_DL6_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_SYNC_DL6_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL6_DELAY]

//>> GET_[TX_SYNC_DL6_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TX_SYNC_DL6_DELAY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return i_data.extractToRight<TX_SYNC_DL6_DELAY,
           TX_SYNC_DL6_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_SYNC_DL6_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_SYNC_DL6_DELAY]

//>> SET_[TX_SYNC_DL5_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL5_DELAY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL5_DELAY,
           TX_SYNC_DL5_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_SYNC_DL5_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL5_DELAY]

//>> SET_[TX_SYNC_DL5_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL5_DELAY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL5_DELAY,
           TX_SYNC_DL5_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_SYNC_DL5_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL5_DELAY]

//>> GET_[TX_SYNC_DL5_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TX_SYNC_DL5_DELAY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return i_data.extractToRight<TX_SYNC_DL5_DELAY,
           TX_SYNC_DL5_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_SYNC_DL5_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_SYNC_DL5_DELAY]

//>> SET_[TX_SYNC_DL4_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL4_DELAY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL4_DELAY,
           TX_SYNC_DL4_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_SYNC_DL4_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL4_DELAY]

//>> SET_[TX_SYNC_DL4_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL4_DELAY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL4_DELAY,
           TX_SYNC_DL4_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_SYNC_DL4_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL4_DELAY]

//>> GET_[TX_SYNC_DL4_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TX_SYNC_DL4_DELAY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return i_data.extractToRight<TX_SYNC_DL4_DELAY,
           TX_SYNC_DL4_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_SYNC_DL4_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_SYNC_DL4_DELAY]

//>> SET_[TX_SYNC_DL3_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL3_DELAY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL3_DELAY,
           TX_SYNC_DL3_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_SYNC_DL3_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL3_DELAY]

//>> SET_[TX_SYNC_DL3_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL3_DELAY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL3_DELAY,
           TX_SYNC_DL3_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_SYNC_DL3_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL3_DELAY]

//>> GET_[TX_SYNC_DL3_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TX_SYNC_DL3_DELAY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return i_data.extractToRight<TX_SYNC_DL3_DELAY,
           TX_SYNC_DL3_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_SYNC_DL3_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_SYNC_DL3_DELAY]

//>> SET_[TX_SYNC_DL2_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL2_DELAY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL2_DELAY,
           TX_SYNC_DL2_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_SYNC_DL2_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL2_DELAY]

//>> SET_[TX_SYNC_DL2_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL2_DELAY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL2_DELAY,
           TX_SYNC_DL2_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_SYNC_DL2_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL2_DELAY]

//>> GET_[TX_SYNC_DL2_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TX_SYNC_DL2_DELAY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return i_data.extractToRight<TX_SYNC_DL2_DELAY,
           TX_SYNC_DL2_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_SYNC_DL2_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_SYNC_DL2_DELAY]

//>> SET_[TX_SYNC_DL1_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL1_DELAY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL1_DELAY,
           TX_SYNC_DL1_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_SYNC_DL1_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL1_DELAY]

//>> SET_[TX_SYNC_DL1_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL1_DELAY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL1_DELAY,
           TX_SYNC_DL1_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_SYNC_DL1_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL1_DELAY]

//>> GET_[TX_SYNC_DL1_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TX_SYNC_DL1_DELAY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return i_data.extractToRight<TX_SYNC_DL1_DELAY,
           TX_SYNC_DL1_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_SYNC_DL1_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_SYNC_DL1_DELAY]

//>> SET_[TX_SYNC_DL0_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL0_DELAY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL0_DELAY,
           TX_SYNC_DL0_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_omic Invalid dial access TX_SYNC_DL0_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL0_DELAY]

//>> SET_[TX_SYNC_DL0_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TX_SYNC_DL0_DELAY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return o_data.insertFromRight<TX_SYNC_DL0_DELAY,
           TX_SYNC_DL0_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_omic Invalid dial access TX_SYNC_DL0_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TX_SYNC_DL0_DELAY]

//>> GET_[TX_SYNC_DL0_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TX_SYNC_DL0_DELAY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TX_SYNC));
#endif
    return i_data.extractToRight<TX_SYNC_DL0_DELAY,
           TX_SYNC_DL0_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_omic Invalid dial access TX_SYNC_DL0_DELAY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TX_SYNC_DL0_DELAY]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
