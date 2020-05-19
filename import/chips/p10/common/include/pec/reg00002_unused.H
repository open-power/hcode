/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pec/reg00002_unused.H $       */
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

#ifndef __PEC_REG00002_H_UNUSED__
#define __PEC_REG00002_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pec
{
#endif


//>> PREP_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_NWRSTKOVR_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG]

//>> GET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_PBCQ_PEPBREGS_NWRSTKOVR_REG;
#endif
    return fapi2::getScom(i_target, PB_PBCQ_PEPBREGS_NWRSTKOVR_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG]

//>> PUT_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return fapi2::putScom(i_target, PB_PBCQ_PEPBREGS_NWRSTKOVR_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG]


//>> SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0,
           PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0]

//>> SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0,
           PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0]

//>> GET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0,
           PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK0]

//>> SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1,
           PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1]

//>> SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1,
           PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1]

//>> GET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1,
           PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_STK1]

//>> SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return o_data.insertFromRight<PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE]

//>> SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return o_data.setBit<PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE]

//>> CLEAR_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return o_data.clearBit<PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE]

//>> GET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return i_data.extractToRight<PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE]

//>> GET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE]
static inline bool GET_PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_PBCQ_PEPBREGS_NWRSTKOVR_REG));
#endif
    return i_data.getBit<PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pec Invalid dial access PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_PBCQ_PEPBREGS_NWRSTKOVR_REG_ENABLE]

//>> PREP_[PIPEDOUTCTL4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PIPEDOUTCTL4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PIPEDOUTCTL4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PIPEDOUTCTL4]

//>> GET_[PIPEDOUTCTL4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PIPEDOUTCTL4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PIPEDOUTCTL4;
#endif
    return fapi2::getScom(i_target, PIPEDOUTCTL4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PIPEDOUTCTL4]

//>> PUT_[PIPEDOUTCTL4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PIPEDOUTCTL4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL4));
#endif
    return fapi2::putScom(i_target, PIPEDOUTCTL4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PIPEDOUTCTL4]


//>> SET_[PIPEDOUTCTL4_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL4_RESERVED_63_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL4));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL4_RESERVED_63_0,
           PIPEDOUTCTL4_RESERVED_63_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pec Invalid dial access PIPEDOUTCTL4_RESERVED_63_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL4_RESERVED_63_0]

//>> SET_[PIPEDOUTCTL4_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& SET_PIPEDOUTCTL4_RESERVED_63_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL4));
#endif
    return o_data.insertFromRight<PIPEDOUTCTL4_RESERVED_63_0,
           PIPEDOUTCTL4_RESERVED_63_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pec Invalid dial access PIPEDOUTCTL4_RESERVED_63_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PIPEDOUTCTL4_RESERVED_63_0]

//>> GET_[PIPEDOUTCTL4_RESERVED_63_0]
static inline fapi2::buffer<uint64_t>& GET_PIPEDOUTCTL4_RESERVED_63_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PIPEDOUTCTL4));
#endif
    return i_data.extractToRight<PIPEDOUTCTL4_RESERVED_63_0,
           PIPEDOUTCTL4_RESERVED_63_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pec Invalid dial access PIPEDOUTCTL4_RESERVED_63_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PIPEDOUTCTL4_RESERVED_63_0]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
