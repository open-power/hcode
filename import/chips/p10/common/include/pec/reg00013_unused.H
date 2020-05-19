/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pec/reg00013_unused.H $       */
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

#ifndef __PEC_REG00013_H_UNUSED__
#define __PEC_REG00013_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> PREP_[IOPFIRACT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IOPFIRACT0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOPFIRACT0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IOPFIRACT0]

//>> GET_[IOPFIRACT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IOPFIRACT0(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IOPFIRACT0;
#endif
    return fapi2::getScom(i_target, IOPFIRACT0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IOPFIRACT0]

//>> PUT_[IOPFIRACT0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IOPFIRACT0(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IOPFIRACT0));
#endif
    return fapi2::putScom(i_target, IOPFIRACT0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IOPFIRACT0]


//>> SET_[IOPFIRACT0_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& SET_IOPFIRACT0_FIR_ACTION0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIRACT0));
#endif
    return o_data.insertFromRight<IOPFIRACT0_FIR_ACTION0,
           IOPFIRACT0_FIR_ACTION0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IOPFIRACT0_FIR_ACTION0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIRACT0_FIR_ACTION0]

//>> SET_[IOPFIRACT0_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& SET_IOPFIRACT0_FIR_ACTION0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIRACT0));
#endif
    return o_data.insertFromRight<IOPFIRACT0_FIR_ACTION0,
           IOPFIRACT0_FIR_ACTION0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IOPFIRACT0_FIR_ACTION0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IOPFIRACT0_FIR_ACTION0]

//>> GET_[IOPFIRACT0_FIR_ACTION0]
static inline fapi2::buffer<uint64_t>& GET_IOPFIRACT0_FIR_ACTION0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IOPFIRACT0));
#endif
    return i_data.extractToRight<IOPFIRACT0_FIR_ACTION0,
           IOPFIRACT0_FIR_ACTION0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IOPFIRACT0_FIR_ACTION0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IOPFIRACT0_FIR_ACTION0]

//>> PREP_[IXDATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IXDATA1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IXDATA1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IXDATA1]

//>> GET_[IXDATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IXDATA1(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IXDATA1;
#endif
    return fapi2::getScom(i_target, IXDATA1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IXDATA1]

//>> PUT_[IXDATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IXDATA1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IXDATA1));
#endif
    return fapi2::putScom(i_target, IXDATA1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IXDATA1]


//>> SET_[IXDATA1_DATA]
static inline fapi2::buffer<uint64_t>& SET_IXDATA1_DATA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IXDATA1));
#endif
    return o_data.insertFromRight<IXDATA1_DATA,
           IXDATA1_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IXDATA1_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IXDATA1_DATA]

//>> SET_[IXDATA1_DATA]
static inline fapi2::buffer<uint64_t>& SET_IXDATA1_DATA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IXDATA1));
#endif
    return o_data.insertFromRight<IXDATA1_DATA,
           IXDATA1_DATA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IXDATA1_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IXDATA1_DATA]

//>> GET_[IXDATA1_DATA]
static inline fapi2::buffer<uint64_t>& GET_IXDATA1_DATA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IXDATA1));
#endif
    return i_data.extractToRight<IXDATA1_DATA,
           IXDATA1_DATA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IXDATA1_DATA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IXDATA1_DATA]

//>> PREP_[IXRADR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_IXRADR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IXRADR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[IXRADR1]

//>> GET_[IXRADR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_IXRADR1(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = IXRADR1;
#endif
    return fapi2::getScom(i_target, IXRADR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[IXRADR1]

//>> PUT_[IXRADR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_IXRADR1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(IXRADR1));
#endif
    return fapi2::putScom(i_target, IXRADR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[IXRADR1]


//>> SET_[IXRADR1_ADDR]
static inline fapi2::buffer<uint64_t>& SET_IXRADR1_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IXRADR1));
#endif
    return o_data.insertFromRight<IXRADR1_ADDR,
           IXRADR1_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access IXRADR1_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IXRADR1_ADDR]

//>> SET_[IXRADR1_ADDR]
static inline fapi2::buffer<uint64_t>& SET_IXRADR1_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IXRADR1));
#endif
    return o_data.insertFromRight<IXRADR1_ADDR,
           IXRADR1_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access IXRADR1_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[IXRADR1_ADDR]

//>> GET_[IXRADR1_ADDR]
static inline fapi2::buffer<uint64_t>& GET_IXRADR1_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(IXRADR1));
#endif
    return i_data.extractToRight<IXRADR1_ADDR,
           IXRADR1_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access IXRADR1_ADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[IXRADR1_ADDR]

//>> PREP_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PBCQ_PEPBREGS_DRPPRICTL_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_DRPPRICTL_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG]

//>> GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_DRPPRICTL_REG;
#endif
    return fapi2::getScom(i_target, PB_PBCQ_PEPBREGS_DRPPRICTL_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG]

//>> PUT_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PBCQ_PEPBREGS_DRPPRICTL_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return fapi2::putScom(i_target, PB_PBCQ_PEPBREGS_DRPPRICTL_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG]


//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK,
           PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK,
           PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK]

//>> GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK,
           PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPRIORITYMASK]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY]

//>> CLEAR_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY]

//>> GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY]

//>> GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY]
static inline bool GET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_CTAG_DROP_PRIORITY]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING]

//>> CLEAR_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING]

//>> GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING]

//>> GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING]
static inline bool GET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_ENABLE_IO_CMD_PACING]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT,
           PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT,
           PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT]

//>> GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT,
           PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACECOUNT]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC,
           PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC,
           PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC]

//>> GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC,
           PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_DROPPACEINC]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER,
           PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER]

//>> SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER,
           PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER]

//>> GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_DRPPRICTL_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER,
           PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_DRPPRICTL_REG_RTYDROPDIVIDER]

//>> PREP_[PIPEDINCTL2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PIPEDINCTL2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PIPEDINCTL2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PIPEDINCTL2]

//>> GET_[PIPEDINCTL2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PIPEDINCTL2(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PIPEDINCTL2;
#endif
    return fapi2::getScom(i_target, PIPEDINCTL2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PIPEDINCTL2]

//>> PUT_[PIPEDINCTL2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PIPEDINCTL2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PIPEDINCTL2));
#endif
    return fapi2::putScom(i_target, PIPEDINCTL2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PIPEDINCTL2]


//>> SET_[PIPEDINCTL2_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL2_RESERVED_63_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL2));
#endif
    return o_data.insertFromRight<PIPEDINCTL2_RESERVED_63_0,
           PIPEDINCTL2_RESERVED_63_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDINCTL2_RESERVED_63_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL2_RESERVED_63_0]

//>> SET_[PIPEDINCTL2_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& SET_PIPEDINCTL2_RESERVED_63_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL2));
#endif
    return o_data.insertFromRight<PIPEDINCTL2_RESERVED_63_0,
           PIPEDINCTL2_RESERVED_63_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDINCTL2_RESERVED_63_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDINCTL2_RESERVED_63_0]

//>> GET_[PIPEDINCTL2_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& GET_PIPEDINCTL2_RESERVED_63_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDINCTL2));
#endif
    return i_data.extractToRight<PIPEDINCTL2_RESERVED_63_0,
           PIPEDINCTL2_RESERVED_63_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDINCTL2_RESERVED_63_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDINCTL2_RESERVED_63_0]

//>> PREP_[PIPEDOUTCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PIPEDOUTCTL1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PIPEDOUTCTL1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PIPEDOUTCTL1]

//>> GET_[PIPEDOUTCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PIPEDOUTCTL1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PIPEDOUTCTL1;
#endif
    return fapi2::getScom(i_target, PIPEDOUTCTL1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PIPEDOUTCTL1]

//>> PUT_[PIPEDOUTCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PIPEDOUTCTL1(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return fapi2::putScom(i_target, PIPEDOUTCTL1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PIPEDOUTCTL1]


//>> SET_[PIPEDOUTCTL1_RESERVED_63_31]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_63_31(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_RESERVED_63_31,
           PIPEDOUTCTL1_RESERVED_63_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_63_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_63_31]

//>> SET_[PIPEDOUTCTL1_RESERVED_63_31]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_63_31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_RESERVED_63_31,
           PIPEDOUTCTL1_RESERVED_63_31_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_63_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_63_31]

//>> GET_[PIPEDOUTCTL1_RESERVED_63_31]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL1_RESERVED_63_31(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<PIPEDOUTCTL1_RESERVED_63_31,
           PIPEDOUTCTL1_RESERVED_63_31_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_63_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_RESERVED_63_31]

//>> SET_[PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_RESERVED_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_30]

//>> SET_[PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_RESERVED_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_30]

//>> SET_[PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.setBit<PIPEDOUTCTL1_RESERVED_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_30]

//>> CLEAR_[PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.clearBit<PIPEDOUTCTL1_RESERVED_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL1_RESERVED_30]

//>> GET_[PIPEDOUTCTL1_RESERVED_30]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<PIPEDOUTCTL1_RESERVED_30,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_RESERVED_30]

//>> GET_[PIPEDOUTCTL1_RESERVED_30]
static inline bool GET_PIPEDOUTCTL1_RESERVED_30(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.getBit<PIPEDOUTCTL1_RESERVED_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_RESERVED_30]

//>> SET_[PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> SET_[PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> SET_[PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.setBit<PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> CLEAR_[PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.clearBit<PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> GET_[PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> GET_[PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]
static inline bool GET_PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.getBit<PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_PHY1_MPLLB_FORCE_EN]

//>> SET_[PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_RESERVED_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_28]

//>> SET_[PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_28(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_RESERVED_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_28]

//>> SET_[PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.setBit<PIPEDOUTCTL1_RESERVED_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_28]

//>> CLEAR_[PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.clearBit<PIPEDOUTCTL1_RESERVED_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL1_RESERVED_28]

//>> GET_[PIPEDOUTCTL1_RESERVED_28]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<PIPEDOUTCTL1_RESERVED_28,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_RESERVED_28]

//>> GET_[PIPEDOUTCTL1_RESERVED_28]
static inline bool GET_PIPEDOUTCTL1_RESERVED_28(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.getBit<PIPEDOUTCTL1_RESERVED_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_RESERVED_28]

//>> SET_[PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> SET_[PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> SET_[PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.setBit<PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> CLEAR_[PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.clearBit<PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> GET_[PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> GET_[PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]
static inline bool GET_PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.getBit<PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_PHY1_MPLLA_FORCE_EN]

//>> SET_[PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_RESERVED_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_26]

//>> SET_[PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_26(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_RESERVED_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_26]

//>> SET_[PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.setBit<PIPEDOUTCTL1_RESERVED_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_26]

//>> CLEAR_[PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.clearBit<PIPEDOUTCTL1_RESERVED_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL1_RESERVED_26]

//>> GET_[PIPEDOUTCTL1_RESERVED_26]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<PIPEDOUTCTL1_RESERVED_26,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_RESERVED_26]

//>> GET_[PIPEDOUTCTL1_RESERVED_26]
static inline bool GET_PIPEDOUTCTL1_RESERVED_26(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.getBit<PIPEDOUTCTL1_RESERVED_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_RESERVED_26]

//>> SET_[PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> SET_[PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> SET_[PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.setBit<PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> CLEAR_[PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.clearBit<PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> GET_[PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> GET_[PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]
static inline bool GET_PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.getBit<PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_PHY0_MPLLB_FORCE_EN]

//>> SET_[PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_RESERVED_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_24]

//>> SET_[PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_24(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_RESERVED_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_24]

//>> SET_[PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.setBit<PIPEDOUTCTL1_RESERVED_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_24]

//>> CLEAR_[PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.clearBit<PIPEDOUTCTL1_RESERVED_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL1_RESERVED_24]

//>> GET_[PIPEDOUTCTL1_RESERVED_24]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<PIPEDOUTCTL1_RESERVED_24,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_RESERVED_24]

//>> GET_[PIPEDOUTCTL1_RESERVED_24]
static inline bool GET_PIPEDOUTCTL1_RESERVED_24(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.getBit<PIPEDOUTCTL1_RESERVED_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_RESERVED_24]

//>> SET_[PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> SET_[PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> SET_[PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.setBit<PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> CLEAR_[PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& CLEAR_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.clearBit<PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> GET_[PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> GET_[PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]
static inline bool GET_PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.getBit<PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_PHY0_MPLLA_FORCE_EN]

//>> SET_[PIPEDOUTCTL1_RESERVED_22_0]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_22_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_RESERVED_22_0,
           PIPEDOUTCTL1_RESERVED_22_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_22_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_22_0]

//>> SET_[PIPEDOUTCTL1_RESERVED_22_0]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL1_RESERVED_22_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL1_RESERVED_22_0,
           PIPEDOUTCTL1_RESERVED_22_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_22_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL1_RESERVED_22_0]

//>> GET_[PIPEDOUTCTL1_RESERVED_22_0]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL1_RESERVED_22_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL1));
#endif
    return i_data.extractToRight<PIPEDOUTCTL1_RESERVED_22_0,
           PIPEDOUTCTL1_RESERVED_22_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL1_RESERVED_22_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL1_RESERVED_22_0]

//>> PREP_[CC_ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_CC_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CC_ATOMIC_LOCK_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[CC_ATOMIC_LOCK_REG]

//>> GET_[CC_ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_CC_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = CC_ATOMIC_LOCK_REG;
#endif
    return fapi2::getScom(i_target, CC_ATOMIC_LOCK_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG]

//>> PUT_[CC_ATOMIC_LOCK_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_CC_ATOMIC_LOCK_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return fapi2::putScom(i_target, CC_ATOMIC_LOCK_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[CC_ATOMIC_LOCK_REG]


//>> SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.setBit<CC_ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> CLEAR_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.clearBit<CC_ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> GET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<CC_ATOMIC_LOCK_REG_LOCK_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> GET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]
static inline bool GET_CC_ATOMIC_LOCK_REG_LOCK_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return i_data.getBit<CC_ATOMIC_LOCK_REG_LOCK_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access CC_ATOMIC_LOCK_REG_LOCK_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG_LOCK_ENABLE]

//>> SET_[CC_ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_ID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_ID,
           CC_ATOMIC_LOCK_REG_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access CC_ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_ID]

//>> SET_[CC_ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_ID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_ID,
           CC_ATOMIC_LOCK_REG_ID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access CC_ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_ID]

//>> GET_[CC_ATOMIC_LOCK_REG_ID]
static inline fapi2::buffer<uint64_t>& GET_CC_ATOMIC_LOCK_REG_ID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<CC_ATOMIC_LOCK_REG_ID,
           CC_ATOMIC_LOCK_REG_ID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access CC_ATOMIC_LOCK_REG_ID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG_ID]

//>> SET_[CC_ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_ACTIVITY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_ACTIVITY,
           CC_ATOMIC_LOCK_REG_ACTIVITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access CC_ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_ACTIVITY]

//>> SET_[CC_ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& SET_CC_ATOMIC_LOCK_REG_ACTIVITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return o_data.insertFromRight<CC_ATOMIC_LOCK_REG_ACTIVITY,
           CC_ATOMIC_LOCK_REG_ACTIVITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access CC_ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[CC_ATOMIC_LOCK_REG_ACTIVITY]

//>> GET_[CC_ATOMIC_LOCK_REG_ACTIVITY]
static inline fapi2::buffer<uint64_t>& GET_CC_ATOMIC_LOCK_REG_ACTIVITY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(CC_ATOMIC_LOCK_REG));
#endif
    return i_data.extractToRight<CC_ATOMIC_LOCK_REG_ACTIVITY,
           CC_ATOMIC_LOCK_REG_ACTIVITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access CC_ATOMIC_LOCK_REG_ACTIVITY chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[CC_ATOMIC_LOCK_REG_ACTIVITY]

//>> PREP_[PRIMARY_ADDRESS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PRIMARY_ADDRESS_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PRIMARY_ADDRESS_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PRIMARY_ADDRESS_REG]

//>> GET_[PRIMARY_ADDRESS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PRIMARY_ADDRESS_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PRIMARY_ADDRESS_REG;
#endif
    return fapi2::getScom(i_target, PRIMARY_ADDRESS_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PRIMARY_ADDRESS_REG]

//>> PUT_[PRIMARY_ADDRESS_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PRIMARY_ADDRESS_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PRIMARY_ADDRESS_REG));
#endif
    return fapi2::putScom(i_target, PRIMARY_ADDRESS_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PRIMARY_ADDRESS_REG]


//>> SET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRIMARY_ADDRESS_REG));
#endif
    return o_data.insertFromRight<PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS,
           PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]

//>> SET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]
static inline fapi2::buffer<uint64_t>& SET_PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRIMARY_ADDRESS_REG));
#endif
    return o_data.insertFromRight<PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS,
           PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]

//>> GET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]
static inline fapi2::buffer<uint64_t>& GET_PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PRIMARY_ADDRESS_REG));
#endif
    return i_data.extractToRight<PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS,
           PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PRIMARY_ADDRESS_REG_PRIMARY_ADDRESS]

//>> PREP_[SCAN_UPDATEDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SCAN_UPDATEDR_LONG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_UPDATEDR_LONG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SCAN_UPDATEDR_LONG]

//>> GET_[SCAN_UPDATEDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SCAN_UPDATEDR_LONG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SCAN_UPDATEDR_LONG;
#endif
    return fapi2::getScom(i_target, SCAN_UPDATEDR_LONG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SCAN_UPDATEDR_LONG]

//>> PUT_[SCAN_UPDATEDR_LONG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SCAN_UPDATEDR_LONG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR_LONG));
#endif
    return fapi2::putScom(i_target, SCAN_UPDATEDR_LONG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SCAN_UPDATEDR_LONG]


//>> SET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR_LONG));
#endif
    return o_data.insertFromRight<SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG,
           SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]

//>> SET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& SET_SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR_LONG));
#endif
    return o_data.insertFromRight<SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG,
           SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]

//>> GET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]
static inline fapi2::buffer<uint64_t>& GET_SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SCAN_UPDATEDR_LONG));
#endif
    return i_data.extractToRight<SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG,
           SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[SCAN_UPDATEDR_LONG_SCAN_UPDATEDR_LONG_REG]

//>> PREP_[TRA0_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_9]

//>> GET_[TRA0_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_9;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9]

//>> PUT_[TRA0_TR0_CONFIG_9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_9(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_9]


//>> SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> CLEAR_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> GET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]
static inline bool GET_TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_DISABLE_COMPRESSION]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> CLEAR_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]
static inline bool GET_TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_BIT_COMPRESSION_CARE_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHA_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> GET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCHA_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCHA_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHA_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCHA_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCHA_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHB_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> GET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCHB_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCHB_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHB_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCHB_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCHB_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHC_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> GET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCHC_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCHC_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHC_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCHC_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCHC_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCHD_MUXSEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> GET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCHD_MUXSEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCHD_MUXSEL,
           TRA0_TR0_CONFIG_9_MATCHD_MUXSEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCHD_MUXSEL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCHD_MUXSEL]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG0_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG0_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_OR_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG0_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG0_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG0_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_AND_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_OR_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG1_OR_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG1_OR_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_OR_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_OR_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_OR_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_AND_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG1_AND_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG1_AND_MASK,
           TRA0_TR0_CONFIG_9_TRIG1_AND_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_AND_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_AND_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> CLEAR_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]
static inline bool GET_TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> CLEAR_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]
static inline bool GET_TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_MATCH_NOT_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> GET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_MATCH_NOT_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_MATCH_NOT_MODE,
           TRA0_TR0_CONFIG_9_MATCH_NOT_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_MATCH_NOT_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_MATCH_NOT_MODE]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> CLEAR_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]
static inline bool GET_TRA0_TR0_CONFIG_9_ERROR_CMP_MASK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_ERROR_CMP_MASK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_MASK chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_MASK]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> CLEAR_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]
static inline bool GET_TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_ERROR_CMP_PATTERN]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> CLEAR_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]
static inline bool GET_TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG0_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> CLEAR_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> GET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]
static inline bool GET_TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_TRIG1_ERR_CMP]

//>> SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> CLEAR_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> GET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]
static inline bool GET_TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_DD1_STRETCH_TRIGGER_PULSES]

//>> SET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> SET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_SPARE_LT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_9_SPARE_LT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> SET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.setBit<TRA0_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> CLEAR_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& CLEAR_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return o_data.clearBit<TRA0_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> GET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_9_SPARE_LT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> GET_[TRA0_TR0_CONFIG_9_SPARE_LT]
static inline bool GET_TRA0_TR0_CONFIG_9_SPARE_LT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_9));
#endif
    return i_data.getBit<TRA0_TR0_CONFIG_9_SPARE_LT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access TRA0_TR0_CONFIG_9_SPARE_LT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_9_SPARE_LT]

//>> PREP_[XSTOP5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_XSTOP5(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP5;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[XSTOP5]

//>> GET_[XSTOP5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_XSTOP5(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = XSTOP5;
#endif
    return fapi2::getScom(i_target, XSTOP5, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[XSTOP5]

//>> PUT_[XSTOP5]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_XSTOP5(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return fapi2::putScom(i_target, XSTOP5, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[XSTOP5]


//>> SET_[XSTOP5_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_ENABLE]

//>> SET_[XSTOP5_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_ENABLE]

//>> SET_[XSTOP5_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_ENABLE]

//>> CLEAR_[XSTOP5_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_ENABLE]

//>> GET_[XSTOP5_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_ENABLE]

//>> GET_[XSTOP5_ENABLE]
static inline bool GET_XSTOP5_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_ENABLE]

//>> SET_[XSTOP5_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_WAIT_SNOPA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_WAIT_SNOPA]

//>> SET_[XSTOP5_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_WAIT_SNOPA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_WAIT_SNOPA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_WAIT_SNOPA]

//>> SET_[XSTOP5_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_WAIT_SNOPA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_WAIT_SNOPA]

//>> CLEAR_[XSTOP5_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_WAIT_SNOPA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_WAIT_SNOPA]

//>> GET_[XSTOP5_WAIT_SNOPA]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_WAIT_SNOPA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_WAIT_SNOPA]

//>> GET_[XSTOP5_WAIT_SNOPA]
static inline bool GET_XSTOP5_WAIT_SNOPA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_WAIT_SNOPA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_WAIT_SNOPA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_WAIT_SNOPA]

//>> SET_[XSTOP5_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_TRIGGER_OPCG_GO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_TRIGGER_OPCG_GO]

//>> SET_[XSTOP5_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_TRIGGER_OPCG_GO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_TRIGGER_OPCG_GO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_TRIGGER_OPCG_GO]

//>> SET_[XSTOP5_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_TRIGGER_OPCG_GO]

//>> CLEAR_[XSTOP5_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_TRIGGER_OPCG_GO]

//>> GET_[XSTOP5_TRIGGER_OPCG_GO]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_TRIGGER_OPCG_GO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_TRIGGER_OPCG_GO]

//>> GET_[XSTOP5_TRIGGER_OPCG_GO]
static inline bool GET_XSTOP5_TRIGGER_OPCG_GO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_TRIGGER_OPCG_GO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_TRIGGER_OPCG_GO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_TRIGGER_OPCG_GO]

//>> SET_[XSTOP5_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_WAIT_ALWAYS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_WAIT_ALWAYS]

//>> SET_[XSTOP5_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_WAIT_ALWAYS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_WAIT_ALWAYS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_WAIT_ALWAYS]

//>> SET_[XSTOP5_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_WAIT_ALWAYS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_WAIT_ALWAYS]

//>> CLEAR_[XSTOP5_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_WAIT_ALWAYS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_WAIT_ALWAYS]

//>> GET_[XSTOP5_WAIT_ALWAYS]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_WAIT_ALWAYS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_WAIT_ALWAYS]

//>> GET_[XSTOP5_WAIT_ALWAYS]
static inline bool GET_XSTOP5_WAIT_ALWAYS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_WAIT_ALWAYS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_WAIT_ALWAYS chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_WAIT_ALWAYS]

//>> SET_[XSTOP5_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_PERV]

//>> SET_[XSTOP5_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_PERV]

//>> SET_[XSTOP5_REGION_PERV]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_PERV]

//>> CLEAR_[XSTOP5_REGION_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_PERV]

//>> GET_[XSTOP5_REGION_PERV]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_PERV]

//>> GET_[XSTOP5_REGION_PERV]
static inline bool GET_XSTOP5_REGION_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_PERV]

//>> SET_[XSTOP5_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT1]

//>> SET_[XSTOP5_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT1]

//>> SET_[XSTOP5_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT1]

//>> CLEAR_[XSTOP5_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT1]

//>> GET_[XSTOP5_REGION_UNIT1]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT1]

//>> GET_[XSTOP5_REGION_UNIT1]
static inline bool GET_XSTOP5_REGION_UNIT1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT1]

//>> SET_[XSTOP5_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT2]

//>> SET_[XSTOP5_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT2]

//>> SET_[XSTOP5_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT2]

//>> CLEAR_[XSTOP5_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT2]

//>> GET_[XSTOP5_REGION_UNIT2]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT2]

//>> GET_[XSTOP5_REGION_UNIT2]
static inline bool GET_XSTOP5_REGION_UNIT2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT2]

//>> SET_[XSTOP5_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT3]

//>> SET_[XSTOP5_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT3]

//>> SET_[XSTOP5_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT3]

//>> CLEAR_[XSTOP5_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT3]

//>> GET_[XSTOP5_REGION_UNIT3]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT3]

//>> GET_[XSTOP5_REGION_UNIT3]
static inline bool GET_XSTOP5_REGION_UNIT3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT3]

//>> SET_[XSTOP5_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT4]

//>> SET_[XSTOP5_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT4]

//>> SET_[XSTOP5_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT4]

//>> CLEAR_[XSTOP5_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT4]

//>> GET_[XSTOP5_REGION_UNIT4]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT4]

//>> GET_[XSTOP5_REGION_UNIT4]
static inline bool GET_XSTOP5_REGION_UNIT4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT4]

//>> SET_[XSTOP5_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT5]

//>> SET_[XSTOP5_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT5]

//>> SET_[XSTOP5_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT5]

//>> CLEAR_[XSTOP5_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT5]

//>> GET_[XSTOP5_REGION_UNIT5]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT5]

//>> GET_[XSTOP5_REGION_UNIT5]
static inline bool GET_XSTOP5_REGION_UNIT5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT5]

//>> SET_[XSTOP5_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT6]

//>> SET_[XSTOP5_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT6]

//>> SET_[XSTOP5_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT6]

//>> CLEAR_[XSTOP5_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT6]

//>> GET_[XSTOP5_REGION_UNIT6]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT6]

//>> GET_[XSTOP5_REGION_UNIT6]
static inline bool GET_XSTOP5_REGION_UNIT6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT6]

//>> SET_[XSTOP5_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT7]

//>> SET_[XSTOP5_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT7]

//>> SET_[XSTOP5_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT7]

//>> CLEAR_[XSTOP5_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT7]

//>> GET_[XSTOP5_REGION_UNIT7]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT7]

//>> GET_[XSTOP5_REGION_UNIT7]
static inline bool GET_XSTOP5_REGION_UNIT7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT7]

//>> SET_[XSTOP5_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT8]

//>> SET_[XSTOP5_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT8,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT8]

//>> SET_[XSTOP5_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT8]

//>> CLEAR_[XSTOP5_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT8(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT8]

//>> GET_[XSTOP5_REGION_UNIT8]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT8,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT8]

//>> GET_[XSTOP5_REGION_UNIT8]
static inline bool GET_XSTOP5_REGION_UNIT8(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT8>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT8 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT8]

//>> SET_[XSTOP5_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT9]

//>> SET_[XSTOP5_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT9]

//>> SET_[XSTOP5_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT9]

//>> CLEAR_[XSTOP5_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT9]

//>> GET_[XSTOP5_REGION_UNIT9]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT9]

//>> GET_[XSTOP5_REGION_UNIT9]
static inline bool GET_XSTOP5_REGION_UNIT9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT9]

//>> SET_[XSTOP5_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT10]

//>> SET_[XSTOP5_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT10]

//>> SET_[XSTOP5_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT10]

//>> CLEAR_[XSTOP5_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT10]

//>> GET_[XSTOP5_REGION_UNIT10]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT10]

//>> GET_[XSTOP5_REGION_UNIT10]
static inline bool GET_XSTOP5_REGION_UNIT10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT10]

//>> SET_[XSTOP5_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT11]

//>> SET_[XSTOP5_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT11]

//>> SET_[XSTOP5_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT11]

//>> CLEAR_[XSTOP5_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT11]

//>> GET_[XSTOP5_REGION_UNIT11]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT11]

//>> GET_[XSTOP5_REGION_UNIT11]
static inline bool GET_XSTOP5_REGION_UNIT11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT11]

//>> SET_[XSTOP5_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT12]

//>> SET_[XSTOP5_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT12]

//>> SET_[XSTOP5_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT12]

//>> CLEAR_[XSTOP5_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT12]

//>> GET_[XSTOP5_REGION_UNIT12]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT12]

//>> GET_[XSTOP5_REGION_UNIT12]
static inline bool GET_XSTOP5_REGION_UNIT12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT12]

//>> SET_[XSTOP5_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT13]

//>> SET_[XSTOP5_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT13]

//>> SET_[XSTOP5_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT13]

//>> CLEAR_[XSTOP5_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT13]

//>> GET_[XSTOP5_REGION_UNIT13]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT13]

//>> GET_[XSTOP5_REGION_UNIT13]
static inline bool GET_XSTOP5_REGION_UNIT13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT13]

//>> SET_[XSTOP5_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT14]

//>> SET_[XSTOP5_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_REGION_UNIT14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT14]

//>> SET_[XSTOP5_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.setBit<XSTOP5_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access XSTOP5_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_REGION_UNIT14]

//>> CLEAR_[XSTOP5_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& CLEAR_XSTOP5_REGION_UNIT14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.clearBit<XSTOP5_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access XSTOP5_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[XSTOP5_REGION_UNIT14]

//>> GET_[XSTOP5_REGION_UNIT14]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_REGION_UNIT14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT14]

//>> GET_[XSTOP5_REGION_UNIT14]
static inline bool GET_XSTOP5_REGION_UNIT14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.getBit<XSTOP5_REGION_UNIT14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access XSTOP5_REGION_UNIT14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_REGION_UNIT14]

//>> SET_[XSTOP5_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_WAIT_CYCLES,
           XSTOP5_WAIT_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access XSTOP5_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_WAIT_CYCLES]

//>> SET_[XSTOP5_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& SET_XSTOP5_WAIT_CYCLES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return o_data.insertFromRight<XSTOP5_WAIT_CYCLES,
           XSTOP5_WAIT_CYCLES_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access XSTOP5_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[XSTOP5_WAIT_CYCLES]

//>> GET_[XSTOP5_WAIT_CYCLES]
static inline fapi2::buffer<uint64_t>& GET_XSTOP5_WAIT_CYCLES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(XSTOP5));
#endif
    return i_data.extractToRight<XSTOP5_WAIT_CYCLES,
           XSTOP5_WAIT_CYCLES_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access XSTOP5_WAIT_CYCLES chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[XSTOP5_WAIT_CYCLES]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
