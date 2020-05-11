/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pec/reg00003_unused.H $       */
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

#ifndef __PEC_REG00003_H_UNUSED__
#define __PEC_REG00003_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> PREP_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG;
#endif
    return fapi2::getScom(i_target, PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]

//>> PUT_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return fapi2::putScom(i_target, PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG]


//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]

//>> CLEAR_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]
static inline bool GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]

//>> CLEAR_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]
static inline bool GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_TYPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]

//>> CLEAR_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]
static inline bool GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_DISABLE_SCOPE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_RESERVED_03_05]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_VALUE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_OUTSTANDING_COUNT]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_MAX_CRESP_ATAG_VALUE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_CRESP_ATAG_DELTA_VALUE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SAMPLE_RANGE_COUNT]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_RATE_CHANGE_DELTA]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_RATE_CHANGE_DELTA]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_GROUP_MINIMUM_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE]

//>> SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
SET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE]

//>> GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE]
static inline fapi2::buffer<uint64_t>&
GET_PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE,
           PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_PE_INJECT_THRESHOLD_REG_PE_INJECT_THRESHOLD_SYSTEM_MINIMUM_DECREMENT_RATE]

//>> PREP_[EPS_FIR_ANY_LOCAL_ERR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_FIR_ANY_LOCAL_ERR_MASK(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_ANY_LOCAL_ERR_MASK;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_FIR_ANY_LOCAL_ERR_MASK]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_FIR_ANY_LOCAL_ERR_MASK(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_FIR_ANY_LOCAL_ERR_MASK;
#endif
    return fapi2::getScom(i_target, EPS_FIR_ANY_LOCAL_ERR_MASK, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK]

//>> PUT_[EPS_FIR_ANY_LOCAL_ERR_MASK]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_FIR_ANY_LOCAL_ERR_MASK(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return fapi2::putScom(i_target, EPS_FIR_ANY_LOCAL_ERR_MASK, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_FIR_ANY_LOCAL_ERR_MASK]


//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_RECOV_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_SPATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_LOCAL_XSTOP_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.insertFromRight<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& SET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.setBit<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& CLEAR_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return o_data.clearBit<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline fapi2::buffer<uint64_t>& GET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.extractToRight<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]
static inline bool GET_EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_FIR_ANY_LOCAL_ERR_MASK));
#endif
    return i_data.getBit<EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_FIR_ANY_LOCAL_ERR_MASK_HOSTATTN_TO_PCB]

//>> PREP_[EPS_THERM_WSUB_SKITTER_DATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_SKITTER_DATA1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_SKITTER_DATA1]

//>> GET_[EPS_THERM_WSUB_SKITTER_DATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_SKITTER_DATA1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_SKITTER_DATA1;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_SKITTER_DATA1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_SKITTER_DATA1]

//>> PUT_[EPS_THERM_WSUB_SKITTER_DATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_SKITTER_DATA1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_SKITTER_DATA1));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_SKITTER_DATA1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_SKITTER_DATA1]


//>> PREP_[LOCAL_XSTOP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_LOCAL_XSTOP(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LOCAL_XSTOP;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[LOCAL_XSTOP]

//>> GET_[LOCAL_XSTOP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_LOCAL_XSTOP(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LOCAL_XSTOP;
#endif
    return fapi2::getScom(i_target, LOCAL_XSTOP, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[LOCAL_XSTOP]

//>> PUT_[LOCAL_XSTOP]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_LOCAL_XSTOP(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return fapi2::putScom(i_target, LOCAL_XSTOP, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[LOCAL_XSTOP]


//>> SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_ANY_LOCAL_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_ANY_LOCAL_XSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> CLEAR_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> GET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_ANY_LOCAL_XSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> GET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]
static inline bool GET_LOCAL_XSTOP_ANY_LOCAL_XSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_ANY_LOCAL_XSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_ANY_LOCAL_XSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_ANY_LOCAL_XSTOP]

//>> SET_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED1L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED1L]

//>> SET_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED1L(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED1L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED1L]

//>> SET_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_RESERVED1L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED1L]

//>> CLEAR_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_RESERVED1L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_RESERVED1L]

//>> GET_[LOCAL_XSTOP_RESERVED1L]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_RESERVED1L,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED1L]

//>> GET_[LOCAL_XSTOP_RESERVED1L]
static inline bool GET_LOCAL_XSTOP_RESERVED1L(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_RESERVED1L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED1L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED1L]

//>> SET_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED2L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED2L]

//>> SET_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED2L(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED2L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED2L]

//>> SET_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_RESERVED2L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED2L]

//>> CLEAR_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_RESERVED2L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_RESERVED2L]

//>> GET_[LOCAL_XSTOP_RESERVED2L]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_RESERVED2L,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED2L]

//>> GET_[LOCAL_XSTOP_RESERVED2L]
static inline bool GET_LOCAL_XSTOP_RESERVED2L(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_RESERVED2L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED2L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED2L]

//>> SET_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED3L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED3L]

//>> SET_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED3L(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_RESERVED3L,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED3L]

//>> SET_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_RESERVED3L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_RESERVED3L]

//>> CLEAR_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_RESERVED3L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_RESERVED3L]

//>> GET_[LOCAL_XSTOP_RESERVED3L]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_RESERVED3L,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED3L]

//>> GET_[LOCAL_XSTOP_RESERVED3L]
static inline bool GET_LOCAL_XSTOP_RESERVED3L(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_RESERVED3L>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_RESERVED3L chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_RESERVED3L]

//>> SET_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_PERV]

//>> SET_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_PERV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_PERV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_PERV]

//>> SET_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_PERV]

//>> CLEAR_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_PERV]

//>> GET_[LOCAL_XSTOP_PERV]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_PERV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_PERV]

//>> GET_[LOCAL_XSTOP_PERV]
static inline bool GET_LOCAL_XSTOP_PERV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_PERV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_PERV chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_PERV]

//>> SET_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN05]

//>> SET_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN05]

//>> SET_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN05]

//>> CLEAR_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN05]

//>> GET_[LOCAL_XSTOP_IN05]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN05]

//>> GET_[LOCAL_XSTOP_IN05]
static inline bool GET_LOCAL_XSTOP_IN05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_IN05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN05]

//>> SET_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN06]

//>> SET_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN06]

//>> SET_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN06]

//>> CLEAR_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN06]

//>> GET_[LOCAL_XSTOP_IN06]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN06]

//>> GET_[LOCAL_XSTOP_IN06]
static inline bool GET_LOCAL_XSTOP_IN06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_IN06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN06]

//>> SET_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN07]

//>> SET_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN07]

//>> SET_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN07]

//>> CLEAR_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN07]

//>> GET_[LOCAL_XSTOP_IN07]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN07]

//>> GET_[LOCAL_XSTOP_IN07]
static inline bool GET_LOCAL_XSTOP_IN07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_IN07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN07]

//>> SET_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN08]

//>> SET_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN08]

//>> SET_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN08]

//>> CLEAR_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN08]

//>> GET_[LOCAL_XSTOP_IN08]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN08]

//>> GET_[LOCAL_XSTOP_IN08]
static inline bool GET_LOCAL_XSTOP_IN08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_IN08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN08]

//>> SET_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN09]

//>> SET_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN09]

//>> SET_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN09]

//>> CLEAR_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN09]

//>> GET_[LOCAL_XSTOP_IN09]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN09]

//>> GET_[LOCAL_XSTOP_IN09]
static inline bool GET_LOCAL_XSTOP_IN09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_IN09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN09]

//>> SET_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN10]

//>> SET_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN10]

//>> SET_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN10]

//>> CLEAR_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN10]

//>> GET_[LOCAL_XSTOP_IN10]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN10]

//>> GET_[LOCAL_XSTOP_IN10]
static inline bool GET_LOCAL_XSTOP_IN10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_IN10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN10]

//>> SET_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN11]

//>> SET_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN11]

//>> SET_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN11]

//>> CLEAR_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN11]

//>> GET_[LOCAL_XSTOP_IN11]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN11]

//>> GET_[LOCAL_XSTOP_IN11]
static inline bool GET_LOCAL_XSTOP_IN11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_IN11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN11]

//>> SET_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN12]

//>> SET_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN12]

//>> SET_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN12]

//>> CLEAR_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN12]

//>> GET_[LOCAL_XSTOP_IN12]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN12]

//>> GET_[LOCAL_XSTOP_IN12]
static inline bool GET_LOCAL_XSTOP_IN12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_IN12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN12]

//>> SET_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN13]

//>> SET_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN13]

//>> SET_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN13]

//>> CLEAR_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN13]

//>> GET_[LOCAL_XSTOP_IN13]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN13]

//>> GET_[LOCAL_XSTOP_IN13]
static inline bool GET_LOCAL_XSTOP_IN13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_IN13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN13]

//>> SET_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN14]

//>> SET_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN14]

//>> SET_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN14]

//>> CLEAR_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN14]

//>> GET_[LOCAL_XSTOP_IN14]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN14]

//>> GET_[LOCAL_XSTOP_IN14]
static inline bool GET_LOCAL_XSTOP_IN14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_IN14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN14]

//>> SET_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN15]

//>> SET_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.insertFromRight<LOCAL_XSTOP_IN15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN15]

//>> SET_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& SET_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.setBit<LOCAL_XSTOP_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LOCAL_XSTOP_IN15]

//>> CLEAR_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& CLEAR_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return o_data.clearBit<LOCAL_XSTOP_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LOCAL_XSTOP_IN15]

//>> GET_[LOCAL_XSTOP_IN15]
static inline fapi2::buffer<uint64_t>& GET_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.extractToRight<LOCAL_XSTOP_IN15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN15]

//>> GET_[LOCAL_XSTOP_IN15]
static inline bool GET_LOCAL_XSTOP_IN15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LOCAL_XSTOP));
#endif
    return i_data.getBit<LOCAL_XSTOP_IN15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LOCAL_XSTOP_IN15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LOCAL_XSTOP_IN15]

//>> PREP_[LXSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_LXSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LXSTOP_INTERRUPT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[LXSTOP_INTERRUPT_REG]

//>> GET_[LXSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_LXSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = LXSTOP_INTERRUPT_REG;
#endif
    return fapi2::getScom(i_target, LXSTOP_INTERRUPT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG]

//>> PUT_[LXSTOP_INTERRUPT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_LXSTOP_INTERRUPT_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return fapi2::putScom(i_target, LXSTOP_INTERRUPT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[LXSTOP_INTERRUPT_REG]


//>> SET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<LXSTOP_INTERRUPT_REG_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> SET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_LXSTOP_INTERRUPT_REG_LXSTOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.insertFromRight<LXSTOP_INTERRUPT_REG_LXSTOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> SET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& SET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.setBit<LXSTOP_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> CLEAR_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& CLEAR_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return o_data.clearBit<LXSTOP_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> GET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline fapi2::buffer<uint64_t>& GET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return i_data.extractToRight<LXSTOP_INTERRUPT_REG_LXSTOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> GET_[LXSTOP_INTERRUPT_REG_LXSTOP]
static inline bool GET_LXSTOP_INTERRUPT_REG_LXSTOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(LXSTOP_INTERRUPT_REG));
#endif
    return i_data.getBit<LXSTOP_INTERRUPT_REG_LXSTOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access LXSTOP_INTERRUPT_REG_LXSTOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[LXSTOP_INTERRUPT_REG_LXSTOP]

//>> PREP_[PHASE_COUNTER_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHASE_COUNTER_RESET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHASE_COUNTER_RESET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHASE_COUNTER_RESET]

//>> GET_[PHASE_COUNTER_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHASE_COUNTER_RESET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHASE_COUNTER_RESET;
#endif
    return fapi2::getScom(i_target, PHASE_COUNTER_RESET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHASE_COUNTER_RESET]

//>> PUT_[PHASE_COUNTER_RESET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHASE_COUNTER_RESET(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return fapi2::putScom(i_target, PHASE_COUNTER_RESET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHASE_COUNTER_RESET]


//>> SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.insertFromRight<PHASE_COUNTER_RESET_PHASECOUNTER_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.insertFromRight<PHASE_COUNTER_RESET_PHASECOUNTER_RESET,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& SET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.setBit<PHASE_COUNTER_RESET_PHASECOUNTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> CLEAR_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& CLEAR_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return o_data.clearBit<PHASE_COUNTER_RESET_PHASECOUNTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline fapi2::buffer<uint64_t>& GET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return i_data.extractToRight<PHASE_COUNTER_RESET_PHASECOUNTER_RESET,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]
static inline bool GET_PHASE_COUNTER_RESET_PHASECOUNTER_RESET(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHASE_COUNTER_RESET));
#endif
    return i_data.getBit<PHASE_COUNTER_RESET_PHASECOUNTER_RESET>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PHASE_COUNTER_RESET_PHASECOUNTER_RESET chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHASE_COUNTER_RESET_PHASECOUNTER_RESET]

//>> PREP_[SPATTN_MASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SPATTN_MASK_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_MASK_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SPATTN_MASK_RW]

//>> GET_[SPATTN_MASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SPATTN_MASK_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_MASK_RW;
#endif
    return fapi2::getScom(i_target, SPATTN_MASK_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SPATTN_MASK_RW]

//>> PUT_[SPATTN_MASK_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SPATTN_MASK_RW(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return fapi2::putScom(i_target, SPATTN_MASK_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SPATTN_MASK_RW]

//>> PREP_[SPATTN_MASK_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SPATTN_MASK_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_MASK_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SPATTN_MASK_WO_CLEAR]

//>> GET_[SPATTN_MASK_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SPATTN_MASK_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_MASK_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, SPATTN_MASK_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SPATTN_MASK_WO_CLEAR]

//>> PUT_[SPATTN_MASK_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SPATTN_MASK_WO_CLEAR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return fapi2::putScom(i_target, SPATTN_MASK_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SPATTN_MASK_WO_CLEAR]

//>> PREP_[SPATTN_MASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_SPATTN_MASK_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_MASK_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[SPATTN_MASK_WO_OR]

//>> GET_[SPATTN_MASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_SPATTN_MASK_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = SPATTN_MASK_WO_OR;
#endif
    return fapi2::getScom(i_target, SPATTN_MASK_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[SPATTN_MASK_WO_OR]

//>> PUT_[SPATTN_MASK_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_SPATTN_MASK_WO_OR(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return fapi2::putScom(i_target, SPATTN_MASK_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[SPATTN_MASK_WO_OR]


//>> SET_[SPATTN_MASK_01]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_01(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_01]

//>> SET_[SPATTN_MASK_01]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_01(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_01,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_01]

//>> SET_[SPATTN_MASK_01]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_01]

//>> CLEAR_[SPATTN_MASK_01]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_01(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_01]

//>> GET_[SPATTN_MASK_01]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_01(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_01,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_01]

//>> GET_[SPATTN_MASK_01]
static inline bool GET_SPATTN_MASK_01(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_01>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_01 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_01]

//>> SET_[SPATTN_MASK_02]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_02(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_02]

//>> SET_[SPATTN_MASK_02]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_02(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_02,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_02]

//>> SET_[SPATTN_MASK_02]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_02(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_02]

//>> CLEAR_[SPATTN_MASK_02]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_02(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_02]

//>> GET_[SPATTN_MASK_02]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_02(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_02,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_02]

//>> GET_[SPATTN_MASK_02]
static inline bool GET_SPATTN_MASK_02(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_02>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_02 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_02]

//>> SET_[SPATTN_MASK_03]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_03(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_03]

//>> SET_[SPATTN_MASK_03]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_03(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_03,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_03]

//>> SET_[SPATTN_MASK_03]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_03(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_03]

//>> CLEAR_[SPATTN_MASK_03]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_03(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_03]

//>> GET_[SPATTN_MASK_03]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_03(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_03,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_03]

//>> GET_[SPATTN_MASK_03]
static inline bool GET_SPATTN_MASK_03(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_03>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_03 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_03]

//>> SET_[SPATTN_MASK_04]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_04(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_04]

//>> SET_[SPATTN_MASK_04]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_04(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_04,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_04]

//>> SET_[SPATTN_MASK_04]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_04(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_04]

//>> CLEAR_[SPATTN_MASK_04]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_04(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_04]

//>> GET_[SPATTN_MASK_04]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_04(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_04,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_04]

//>> GET_[SPATTN_MASK_04]
static inline bool GET_SPATTN_MASK_04(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_04>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_04 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_04]

//>> SET_[SPATTN_MASK_05]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_05(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_05]

//>> SET_[SPATTN_MASK_05]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_05(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_05,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_05]

//>> SET_[SPATTN_MASK_05]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_05]

//>> CLEAR_[SPATTN_MASK_05]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_05(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_05]

//>> GET_[SPATTN_MASK_05]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_05(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_05,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_05]

//>> GET_[SPATTN_MASK_05]
static inline bool GET_SPATTN_MASK_05(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_05>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_05 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_05]

//>> SET_[SPATTN_MASK_06]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_06(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_06]

//>> SET_[SPATTN_MASK_06]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_06(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_06,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_06]

//>> SET_[SPATTN_MASK_06]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_06]

//>> CLEAR_[SPATTN_MASK_06]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_06(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_06]

//>> GET_[SPATTN_MASK_06]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_06(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_06,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_06]

//>> GET_[SPATTN_MASK_06]
static inline bool GET_SPATTN_MASK_06(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_06>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_06 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_06]

//>> SET_[SPATTN_MASK_07]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_07(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_07]

//>> SET_[SPATTN_MASK_07]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_07(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_07,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_07]

//>> SET_[SPATTN_MASK_07]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_07]

//>> CLEAR_[SPATTN_MASK_07]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_07(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_07]

//>> GET_[SPATTN_MASK_07]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_07(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_07,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_07]

//>> GET_[SPATTN_MASK_07]
static inline bool GET_SPATTN_MASK_07(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_07>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_07 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_07]

//>> SET_[SPATTN_MASK_08]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_08(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_08]

//>> SET_[SPATTN_MASK_08]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_08(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_08,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_08]

//>> SET_[SPATTN_MASK_08]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_08]

//>> CLEAR_[SPATTN_MASK_08]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_08(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_08]

//>> GET_[SPATTN_MASK_08]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_08(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_08,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_08]

//>> GET_[SPATTN_MASK_08]
static inline bool GET_SPATTN_MASK_08(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_08>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_08 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_08]

//>> SET_[SPATTN_MASK_09]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_09(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_09]

//>> SET_[SPATTN_MASK_09]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_09(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_09,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_09]

//>> SET_[SPATTN_MASK_09]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_09]

//>> CLEAR_[SPATTN_MASK_09]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_09(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_09]

//>> GET_[SPATTN_MASK_09]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_09(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_09,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_09]

//>> GET_[SPATTN_MASK_09]
static inline bool GET_SPATTN_MASK_09(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_09>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_09 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_09]

//>> SET_[SPATTN_MASK_10]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_10(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_10]

//>> SET_[SPATTN_MASK_10]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_10(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_10,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_10]

//>> SET_[SPATTN_MASK_10]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_10]

//>> CLEAR_[SPATTN_MASK_10]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_10(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_10]

//>> GET_[SPATTN_MASK_10]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_10(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_10,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_10]

//>> GET_[SPATTN_MASK_10]
static inline bool GET_SPATTN_MASK_10(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_10>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_10 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_10]

//>> SET_[SPATTN_MASK_11]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_11(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_11]

//>> SET_[SPATTN_MASK_11]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_11(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_11,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_11]

//>> SET_[SPATTN_MASK_11]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_11]

//>> CLEAR_[SPATTN_MASK_11]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_11(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_11]

//>> GET_[SPATTN_MASK_11]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_11(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_11,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_11]

//>> GET_[SPATTN_MASK_11]
static inline bool GET_SPATTN_MASK_11(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_11>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_11 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_11]

//>> SET_[SPATTN_MASK_12]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_12(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_12]

//>> SET_[SPATTN_MASK_12]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_12(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_12,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_12]

//>> SET_[SPATTN_MASK_12]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_12]

//>> CLEAR_[SPATTN_MASK_12]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_12(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_12]

//>> GET_[SPATTN_MASK_12]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_12(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_12,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_12]

//>> GET_[SPATTN_MASK_12]
static inline bool GET_SPATTN_MASK_12(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_12>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_12 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_12]

//>> SET_[SPATTN_MASK_13]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_13]

//>> SET_[SPATTN_MASK_13]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_13,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_13]

//>> SET_[SPATTN_MASK_13]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_13]

//>> CLEAR_[SPATTN_MASK_13]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_13(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_13]

//>> GET_[SPATTN_MASK_13]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_13,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_13]

//>> GET_[SPATTN_MASK_13]
static inline bool GET_SPATTN_MASK_13(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_13>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_13 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_13]

//>> SET_[SPATTN_MASK_14]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_14]

//>> SET_[SPATTN_MASK_14]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_14,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_14]

//>> SET_[SPATTN_MASK_14]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_14]

//>> CLEAR_[SPATTN_MASK_14]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_14(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_14]

//>> GET_[SPATTN_MASK_14]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_14,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_14]

//>> GET_[SPATTN_MASK_14]
static inline bool GET_SPATTN_MASK_14(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_14>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_14 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_14]

//>> SET_[SPATTN_MASK_15]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_15]

//>> SET_[SPATTN_MASK_15]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_15]

//>> SET_[SPATTN_MASK_15]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_15]

//>> CLEAR_[SPATTN_MASK_15]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_15]

//>> GET_[SPATTN_MASK_15]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_15]

//>> GET_[SPATTN_MASK_15]
static inline bool GET_SPATTN_MASK_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_15 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_15]

//>> SET_[SPATTN_MASK_16]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_16(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_16]

//>> SET_[SPATTN_MASK_16]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_16(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_16,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_16]

//>> SET_[SPATTN_MASK_16]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_16]

//>> CLEAR_[SPATTN_MASK_16]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_16(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_16]

//>> GET_[SPATTN_MASK_16]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_16(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_16,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_16]

//>> GET_[SPATTN_MASK_16]
static inline bool GET_SPATTN_MASK_16(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_16>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_16 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_16]

//>> SET_[SPATTN_MASK_17]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_17(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_17]

//>> SET_[SPATTN_MASK_17]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_17(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_17,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_17]

//>> SET_[SPATTN_MASK_17]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_17]

//>> CLEAR_[SPATTN_MASK_17]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_17(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_17]

//>> GET_[SPATTN_MASK_17]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_17(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_17,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_17]

//>> GET_[SPATTN_MASK_17]
static inline bool GET_SPATTN_MASK_17(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_17>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_17 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_17]

//>> SET_[SPATTN_MASK_18]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_18(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_18]

//>> SET_[SPATTN_MASK_18]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_18(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_18,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_18]

//>> SET_[SPATTN_MASK_18]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_18]

//>> CLEAR_[SPATTN_MASK_18]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_18(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_18]

//>> GET_[SPATTN_MASK_18]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_18(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_18,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_18]

//>> GET_[SPATTN_MASK_18]
static inline bool GET_SPATTN_MASK_18(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_18>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_18 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_18]

//>> SET_[SPATTN_MASK_19]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_19(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_19]

//>> SET_[SPATTN_MASK_19]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_19,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_19]

//>> SET_[SPATTN_MASK_19]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_19]

//>> CLEAR_[SPATTN_MASK_19]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_19(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_19]

//>> GET_[SPATTN_MASK_19]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_19(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_19,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_19]

//>> GET_[SPATTN_MASK_19]
static inline bool GET_SPATTN_MASK_19(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_19>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_19 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_19]

//>> SET_[SPATTN_MASK_20]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_20(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_20]

//>> SET_[SPATTN_MASK_20]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_20(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_20,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_20]

//>> SET_[SPATTN_MASK_20]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_20]

//>> CLEAR_[SPATTN_MASK_20]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_20(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_20]

//>> GET_[SPATTN_MASK_20]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_20(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_20,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_20]

//>> GET_[SPATTN_MASK_20]
static inline bool GET_SPATTN_MASK_20(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_20>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_20 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_20]

//>> SET_[SPATTN_MASK_21]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_21(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_21]

//>> SET_[SPATTN_MASK_21]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_21(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_21,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_21]

//>> SET_[SPATTN_MASK_21]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_21]

//>> CLEAR_[SPATTN_MASK_21]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_21(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_21]

//>> GET_[SPATTN_MASK_21]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_21(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_21,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_21]

//>> GET_[SPATTN_MASK_21]
static inline bool GET_SPATTN_MASK_21(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_21>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_21 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_21]

//>> SET_[SPATTN_MASK_22]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_22(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_22]

//>> SET_[SPATTN_MASK_22]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_22(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_22,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_22]

//>> SET_[SPATTN_MASK_22]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_22]

//>> CLEAR_[SPATTN_MASK_22]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_22(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_22]

//>> GET_[SPATTN_MASK_22]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_22(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_22,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_22]

//>> GET_[SPATTN_MASK_22]
static inline bool GET_SPATTN_MASK_22(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_22>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_22 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_22]

//>> SET_[SPATTN_MASK_23]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_23]

//>> SET_[SPATTN_MASK_23]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_23]

//>> SET_[SPATTN_MASK_23]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_23]

//>> CLEAR_[SPATTN_MASK_23]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_23]

//>> GET_[SPATTN_MASK_23]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_23,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_23]

//>> GET_[SPATTN_MASK_23]
static inline bool GET_SPATTN_MASK_23(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_23 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_23]

//>> SET_[SPATTN_MASK_24]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_24(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_24]

//>> SET_[SPATTN_MASK_24]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_24(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_24,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_24]

//>> SET_[SPATTN_MASK_24]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_24]

//>> CLEAR_[SPATTN_MASK_24]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_24(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_24]

//>> GET_[SPATTN_MASK_24]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_24(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_24,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_24]

//>> GET_[SPATTN_MASK_24]
static inline bool GET_SPATTN_MASK_24(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_24>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_24 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_24]

//>> SET_[SPATTN_MASK_25]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_25(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_25]

//>> SET_[SPATTN_MASK_25]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_25(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_25,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_25]

//>> SET_[SPATTN_MASK_25]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_25]

//>> CLEAR_[SPATTN_MASK_25]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_25(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_25]

//>> GET_[SPATTN_MASK_25]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_25(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_25,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_25]

//>> GET_[SPATTN_MASK_25]
static inline bool GET_SPATTN_MASK_25(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_25>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_25 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_25]

//>> SET_[SPATTN_MASK_26]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_26(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_26]

//>> SET_[SPATTN_MASK_26]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_26(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_26,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_26]

//>> SET_[SPATTN_MASK_26]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_26]

//>> CLEAR_[SPATTN_MASK_26]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_26(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_26]

//>> GET_[SPATTN_MASK_26]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_26(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_26,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_26]

//>> GET_[SPATTN_MASK_26]
static inline bool GET_SPATTN_MASK_26(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_26>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_26 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_26]

//>> SET_[SPATTN_MASK_27]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_27(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_27]

//>> SET_[SPATTN_MASK_27]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_27(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_27,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_27]

//>> SET_[SPATTN_MASK_27]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_27]

//>> CLEAR_[SPATTN_MASK_27]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_27(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_27]

//>> GET_[SPATTN_MASK_27]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_27(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_27,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_27]

//>> GET_[SPATTN_MASK_27]
static inline bool GET_SPATTN_MASK_27(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_27>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_27 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_27]

//>> SET_[SPATTN_MASK_28]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_28(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_28]

//>> SET_[SPATTN_MASK_28]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_28(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_28,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_28]

//>> SET_[SPATTN_MASK_28]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_28]

//>> CLEAR_[SPATTN_MASK_28]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_28(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_28]

//>> GET_[SPATTN_MASK_28]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_28(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_28,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_28]

//>> GET_[SPATTN_MASK_28]
static inline bool GET_SPATTN_MASK_28(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_28>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_28 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_28]

//>> SET_[SPATTN_MASK_29]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_29(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_29]

//>> SET_[SPATTN_MASK_29]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_29(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_29]

//>> SET_[SPATTN_MASK_29]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_29]

//>> CLEAR_[SPATTN_MASK_29]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_29]

//>> GET_[SPATTN_MASK_29]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_29(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_29,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_29]

//>> GET_[SPATTN_MASK_29]
static inline bool GET_SPATTN_MASK_29(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_29 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_29]

//>> SET_[SPATTN_MASK_30]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_30(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_30]

//>> SET_[SPATTN_MASK_30]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_30(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_30,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_30]

//>> SET_[SPATTN_MASK_30]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_30]

//>> CLEAR_[SPATTN_MASK_30]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_30(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_30]

//>> GET_[SPATTN_MASK_30]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_30(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_30,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_30]

//>> GET_[SPATTN_MASK_30]
static inline bool GET_SPATTN_MASK_30(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_30>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_30 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_30]

//>> SET_[SPATTN_MASK_31]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_31(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_31]

//>> SET_[SPATTN_MASK_31]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_31(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_31,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_31]

//>> SET_[SPATTN_MASK_31]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_31]

//>> CLEAR_[SPATTN_MASK_31]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_31(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_31]

//>> GET_[SPATTN_MASK_31]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_31(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_31,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_31]

//>> GET_[SPATTN_MASK_31]
static inline bool GET_SPATTN_MASK_31(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_31>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_31 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_31]

//>> SET_[SPATTN_MASK_32]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_32(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_32]

//>> SET_[SPATTN_MASK_32]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_32(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_32,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_32]

//>> SET_[SPATTN_MASK_32]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_32]

//>> CLEAR_[SPATTN_MASK_32]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_32(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_32]

//>> GET_[SPATTN_MASK_32]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_32(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_32,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_32]

//>> GET_[SPATTN_MASK_32]
static inline bool GET_SPATTN_MASK_32(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_32>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_32 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_32]

//>> SET_[SPATTN_MASK_33]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_33(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_33]

//>> SET_[SPATTN_MASK_33]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_33(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_33,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_33]

//>> SET_[SPATTN_MASK_33]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_33]

//>> CLEAR_[SPATTN_MASK_33]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_33(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_33]

//>> GET_[SPATTN_MASK_33]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_33(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_33,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_33]

//>> GET_[SPATTN_MASK_33]
static inline bool GET_SPATTN_MASK_33(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_33>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_33 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_33]

//>> SET_[SPATTN_MASK_34]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_34(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_34]

//>> SET_[SPATTN_MASK_34]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_34(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_34,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_34]

//>> SET_[SPATTN_MASK_34]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_34]

//>> CLEAR_[SPATTN_MASK_34]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_34(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_34]

//>> GET_[SPATTN_MASK_34]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_34(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_34,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_34]

//>> GET_[SPATTN_MASK_34]
static inline bool GET_SPATTN_MASK_34(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_34>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_34 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_34]

//>> SET_[SPATTN_MASK_35]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_35(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access SPATTN_MASK_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_35]

//>> SET_[SPATTN_MASK_35]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_35(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.insertFromRight<SPATTN_MASK_35,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access SPATTN_MASK_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_35]

//>> SET_[SPATTN_MASK_35]
static inline fapi2::buffer<uint64_t>& SET_SPATTN_MASK_35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.setBit<SPATTN_MASK_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access SPATTN_MASK_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[SPATTN_MASK_35]

//>> CLEAR_[SPATTN_MASK_35]
static inline fapi2::buffer<uint64_t>& CLEAR_SPATTN_MASK_35(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return o_data.clearBit<SPATTN_MASK_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access SPATTN_MASK_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[SPATTN_MASK_35]

//>> GET_[SPATTN_MASK_35]
static inline fapi2::buffer<uint64_t>& GET_SPATTN_MASK_35(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.extractToRight<SPATTN_MASK_35,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access SPATTN_MASK_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_35]

//>> GET_[SPATTN_MASK_35]
static inline bool GET_SPATTN_MASK_35(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(SPATTN_MASK_RW, SPATTN_MASK_WO_CLEAR, SPATTN_MASK_WO_OR));
#endif
    return i_data.getBit<SPATTN_MASK_35>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access SPATTN_MASK_35 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[SPATTN_MASK_35]

//>> PREP_[TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR0_CONFIG_3]

//>> GET_[TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR0_CONFIG_3;
#endif
    return fapi2::getScom(i_target, TRA0_TR0_CONFIG_3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_3]

//>> PUT_[TRA0_TR0_CONFIG_3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR0_CONFIG_3(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return fapi2::putScom(i_target, TRA0_TR0_CONFIG_3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR0_CONFIG_3]


//>> SET_[TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_3_C,
           TRA0_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_3_C]

//>> SET_[TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_3_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_3_C,
           TRA0_TR0_CONFIG_3_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_3_C]

//>> GET_[TRA0_TR0_CONFIG_3_C]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_3_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_3_C,
           TRA0_TR0_CONFIG_3_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_3_C chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_3_C]

//>> SET_[TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_3_D,
           TRA0_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_3_D]

//>> SET_[TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR0_CONFIG_3_D(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return o_data.insertFromRight<TRA0_TR0_CONFIG_3_D,
           TRA0_TR0_CONFIG_3_D_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR0_CONFIG_3_D]

//>> GET_[TRA0_TR0_CONFIG_3_D]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR0_CONFIG_3_D(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR0_CONFIG_3));
#endif
    return i_data.extractToRight<TRA0_TR0_CONFIG_3_D,
           TRA0_TR0_CONFIG_3_D_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access TRA0_TR0_CONFIG_3_D chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR0_CONFIG_3_D]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
