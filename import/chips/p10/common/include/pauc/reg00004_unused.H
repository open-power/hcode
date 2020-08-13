/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/pauc/reg00004_unused.H $      */
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

#ifndef __PAUC_REG00004_H_UNUSED__
#define __PAUC_REG00004_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace pauc
{
#endif


//>> PREP_[DL_PPE_WRAP_ARB_CSCR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_ARB_CSCR_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_ARB_CSCR_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_ARB_CSCR_RW]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_ARB_CSCR_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_ARB_CSCR_RW;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_ARB_CSCR_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_RW]

//>> PUT_[DL_PPE_WRAP_ARB_CSCR_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_ARB_CSCR_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_ARB_CSCR_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_ARB_CSCR_RW]

//>> PREP_[DL_PPE_WRAP_ARB_CSCR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_ARB_CSCR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_ARB_CSCR_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_ARB_CSCR_WO_CLEAR]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_ARB_CSCR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_ARB_CSCR_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_WO_CLEAR]

//>> PUT_[DL_PPE_WRAP_ARB_CSCR_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_ARB_CSCR_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_ARB_CSCR_WO_CLEAR]

//>> PREP_[DL_PPE_WRAP_ARB_CSCR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_DL_PPE_WRAP_ARB_CSCR_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_ARB_CSCR_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[DL_PPE_WRAP_ARB_CSCR_WO_OR]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_DL_PPE_WRAP_ARB_CSCR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = DL_PPE_WRAP_ARB_CSCR_WO_OR;
#endif
    return fapi2::getScom(i_target, DL_PPE_WRAP_ARB_CSCR_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_WO_OR]

//>> PUT_[DL_PPE_WRAP_ARB_CSCR_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_DL_PPE_WRAP_ARB_CSCR_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return fapi2::putScom(i_target, DL_PPE_WRAP_ARB_CSCR_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[DL_PPE_WRAP_ARB_CSCR_WO_OR]


//>> SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.setBit<DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE]

//>> CLEAR_[DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.clearBit<DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE]
static inline bool GET_DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.getBit<DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_SRAM_ACCESS_MODE]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.setBit<DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE]

//>> CLEAR_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.clearBit<DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE]
static inline bool GET_DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.getBit<DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_ENABLE]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.setBit<DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS]

//>> CLEAR_[DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.clearBit<DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS]
static inline bool GET_DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.getBit<DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_ECC_CORRECT_DIS]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.setBit<DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS]

//>> CLEAR_[DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.clearBit<DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS]
static inline bool GET_DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.getBit<DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_ECC_DETECT_DIS]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.setBit<DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE]

//>> CLEAR_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.clearBit<DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE]
static inline bool GET_DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.getBit<DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_TYPE]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.setBit<DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR]

//>> CLEAR_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.clearBit<DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR]
static inline bool GET_DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.getBit<DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_ECC_INJECT_ERR]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_SPARE_6_7]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_SPARE_6_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_SPARE_6_7,
           DL_PPE_WRAP_ARB_CSCR_SPARE_6_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SPARE_6_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_SPARE_6_7]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_SPARE_6_7]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_SPARE_6_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_SPARE_6_7,
           DL_PPE_WRAP_ARB_CSCR_SPARE_6_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SPARE_6_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_SPARE_6_7]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_SPARE_6_7]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_ARB_CSCR_SPARE_6_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_ARB_CSCR_SPARE_6_7,
           DL_PPE_WRAP_ARB_CSCR_SPARE_6_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SPARE_6_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_SPARE_6_7]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX,
           DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX]

//>> SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX]
static inline fapi2::buffer<uint64_t>& SET_DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return o_data.insertFromRight<DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX,
           DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX]

//>> GET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX]
static inline fapi2::buffer<uint64_t>& GET_DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(DL_PPE_WRAP_ARB_CSCR_RW, DL_PPE_WRAP_ARB_CSCR_WO_CLEAR, DL_PPE_WRAP_ARB_CSCR_WO_OR));
#endif
    return i_data.extractToRight<DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX,
           DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[DL_PPE_WRAP_ARB_CSCR_SRAM_SCRUB_INDEX]

//>> PREP_[PB_TL_LINK_RT_DELAY_CTL_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_TL_LINK_RT_DELAY_CTL_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TL_LINK_RT_DELAY_CTL_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_TL_LINK_RT_DELAY_CTL_REG]

//>> GET_[PB_TL_LINK_RT_DELAY_CTL_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_TL_LINK_RT_DELAY_CTL_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TL_LINK_RT_DELAY_CTL_REG;
#endif
    return fapi2::getScom(i_target, PB_TL_LINK_RT_DELAY_CTL_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_TL_LINK_RT_DELAY_CTL_REG]

//>> PUT_[PB_TL_LINK_RT_DELAY_CTL_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_TL_LINK_RT_DELAY_CTL_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return fapi2::putScom(i_target, PB_TL_LINK_RT_DELAY_CTL_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_TL_LINK_RT_DELAY_CTL_REG]


//>> SET_[PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET,
           PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET]

//>> SET_[PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET,
           PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET]

//>> GET_[PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET,
           PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_SET]

//>> SET_[PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET,
           PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET]

//>> SET_[PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET,
           PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET]

//>> GET_[PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET,
           PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_SET]

//>> SET_[PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT,
           PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT]

//>> SET_[PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT,
           PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT]

//>> GET_[PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT,
           PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_RT_DELAY_CTL_REG_01_RT_DELAY_CTL_STAT]

//>> SET_[PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT,
           PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT]

//>> SET_[PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT,
           PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT]

//>> GET_[PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_RT_DELAY_CTL_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT,
           PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_RT_DELAY_CTL_REG_23_RT_DELAY_CTL_STAT]

//>> PREP_[PB_TL_LINK_SYN_23_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PB_TL_LINK_SYN_23_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TL_LINK_SYN_23_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PB_TL_LINK_SYN_23_REG]

//>> GET_[PB_TL_LINK_SYN_23_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PB_TL_LINK_SYN_23_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PB_TL_LINK_SYN_23_REG;
#endif
    return fapi2::getScom(i_target, PB_TL_LINK_SYN_23_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PB_TL_LINK_SYN_23_REG]

//>> PUT_[PB_TL_LINK_SYN_23_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PB_TL_LINK_SYN_23_REG(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return fapi2::putScom(i_target, PB_TL_LINK_SYN_23_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PB_TL_LINK_SYN_23_REG]


//>> SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0,
           PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0]

//>> SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0,
           PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0]

//>> GET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0,
           PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN0]

//>> SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1,
           PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1]

//>> SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1,
           PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1]

//>> GET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1,
           PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN1]

//>> SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2,
           PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2]

//>> SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2,
           PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2]

//>> GET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2,
           PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN2]

//>> SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3,
           PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3]

//>> SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3,
           PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3]

//>> GET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3,
           PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_SYN_23_REG_2_SCOM_SYN3]

//>> SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0,
           PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0]

//>> SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0,
           PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0]

//>> GET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0,
           PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN0]

//>> SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1,
           PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1]

//>> SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1,
           PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1]

//>> GET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1,
           PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN1]

//>> SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2,
           PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2]

//>> SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2,
           PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2]

//>> GET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2,
           PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN2]

//>> SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3,
           PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3]

//>> SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3]
static inline fapi2::buffer<uint64_t>& SET_PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return o_data.insertFromRight<PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3,
           PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3]

//>> GET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3]
static inline fapi2::buffer<uint64_t>& GET_PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PB_TL_LINK_SYN_23_REG));
#endif
    return i_data.extractToRight<PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3,
           PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PB_TL_LINK_SYN_23_REG_3_SCOM_SYN3]

//>> PREP_[PHY_PPE_WRAP_XIRAMGA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PHY_PPE_WRAP_XIRAMGA(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIRAMGA;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PHY_PPE_WRAP_XIRAMGA]

//>> GET_[PHY_PPE_WRAP_XIRAMGA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PHY_PPE_WRAP_XIRAMGA(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PHY_PPE_WRAP_XIRAMGA;
#endif
    return fapi2::getScom(i_target, PHY_PPE_WRAP_XIRAMGA, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMGA]

//>> PUT_[PHY_PPE_WRAP_XIRAMGA]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PHY_PPE_WRAP_XIRAMGA(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMGA));
#endif
    return fapi2::putScom(i_target, PHY_PPE_WRAP_XIRAMGA, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PHY_PPE_WRAP_XIRAMGA]


//>> SET_[PHY_PPE_WRAP_XIRAMGA_GA_IR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMGA_GA_IR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMGA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMGA_GA_IR,
           PHY_PPE_WRAP_XIRAMGA_GA_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMGA_GA_IR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMGA_GA_IR]

//>> SET_[PHY_PPE_WRAP_XIRAMGA_GA_IR]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMGA_GA_IR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMGA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMGA_GA_IR,
           PHY_PPE_WRAP_XIRAMGA_GA_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMGA_GA_IR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMGA_GA_IR]

//>> GET_[PHY_PPE_WRAP_XIRAMGA_GA_IR]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMGA_GA_IR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMGA));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMGA_GA_IR,
           PHY_PPE_WRAP_XIRAMGA_GA_IR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMGA_GA_IR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMGA_GA_IR]

//>> SET_[PHY_PPE_WRAP_XIRAMGA_RA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMGA_RA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMGA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMGA_RA_SPRG0,
           PHY_PPE_WRAP_XIRAMGA_RA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMGA_RA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMGA_RA_SPRG0]

//>> SET_[PHY_PPE_WRAP_XIRAMGA_RA_SPRG0]
static inline fapi2::buffer<uint64_t>& SET_PHY_PPE_WRAP_XIRAMGA_RA_SPRG0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMGA));
#endif
    return o_data.insertFromRight<PHY_PPE_WRAP_XIRAMGA_RA_SPRG0,
           PHY_PPE_WRAP_XIRAMGA_RA_SPRG0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMGA_RA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PHY_PPE_WRAP_XIRAMGA_RA_SPRG0]

//>> GET_[PHY_PPE_WRAP_XIRAMGA_RA_SPRG0]
static inline fapi2::buffer<uint64_t>& GET_PHY_PPE_WRAP_XIRAMGA_RA_SPRG0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PHY_PPE_WRAP_XIRAMGA));
#endif
    return i_data.extractToRight<PHY_PPE_WRAP_XIRAMGA_RA_SPRG0,
           PHY_PPE_WRAP_XIRAMGA_RA_SPRG0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PHY_PPE_WRAP_XIRAMGA_RA_SPRG0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PHY_PPE_WRAP_XIRAMGA_RA_SPRG0]

//>> PREP_[REGION_CCFLUSH_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_REGION_CCFLUSH_STATUS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REGION_CCFLUSH_STATUS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[REGION_CCFLUSH_STATUS]

//>> GET_[REGION_CCFLUSH_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_REGION_CCFLUSH_STATUS(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = REGION_CCFLUSH_STATUS;
#endif
    return fapi2::getScom(i_target, REGION_CCFLUSH_STATUS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[REGION_CCFLUSH_STATUS]

//>> PUT_[REGION_CCFLUSH_STATUS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_REGION_CCFLUSH_STATUS(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(REGION_CCFLUSH_STATUS));
#endif
    return fapi2::putScom(i_target, REGION_CCFLUSH_STATUS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[REGION_CCFLUSH_STATUS]


//>> SET_[REGION_CCFLUSH_STATUS_REGION_CCFLUSH]
static inline fapi2::buffer<uint64_t>& SET_REGION_CCFLUSH_STATUS_REGION_CCFLUSH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGION_CCFLUSH_STATUS));
#endif
    return o_data.insertFromRight<REGION_CCFLUSH_STATUS_REGION_CCFLUSH,
           REGION_CCFLUSH_STATUS_REGION_CCFLUSH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access REGION_CCFLUSH_STATUS_REGION_CCFLUSH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGION_CCFLUSH_STATUS_REGION_CCFLUSH]

//>> SET_[REGION_CCFLUSH_STATUS_REGION_CCFLUSH]
static inline fapi2::buffer<uint64_t>& SET_REGION_CCFLUSH_STATUS_REGION_CCFLUSH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGION_CCFLUSH_STATUS));
#endif
    return o_data.insertFromRight<REGION_CCFLUSH_STATUS_REGION_CCFLUSH,
           REGION_CCFLUSH_STATUS_REGION_CCFLUSH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access REGION_CCFLUSH_STATUS_REGION_CCFLUSH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[REGION_CCFLUSH_STATUS_REGION_CCFLUSH]

//>> GET_[REGION_CCFLUSH_STATUS_REGION_CCFLUSH]
static inline fapi2::buffer<uint64_t>& GET_REGION_CCFLUSH_STATUS_REGION_CCFLUSH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(REGION_CCFLUSH_STATUS));
#endif
    return i_data.extractToRight<REGION_CCFLUSH_STATUS_REGION_CCFLUSH,
           REGION_CCFLUSH_STATUS_REGION_CCFLUSH_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access REGION_CCFLUSH_STATUS_REGION_CCFLUSH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[REGION_CCFLUSH_STATUS_REGION_CCFLUSH]

//>> PREP_[TXIRLM_REGS_TX_IMPCAL1_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_TX_IMPCAL1_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL1_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_TX_IMPCAL1_PB]

//>> GET_[TXIRLM_REGS_TX_IMPCAL1_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_TX_IMPCAL1_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL1_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_TX_IMPCAL1_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL1_PB]

//>> PUT_[TXIRLM_REGS_TX_IMPCAL1_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_TX_IMPCAL1_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_TX_IMPCAL1_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_TX_IMPCAL1_PB]


//>> SET_[TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL]

//>> SET_[TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL]

//>> SET_[TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL]

//>> GET_[TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL]

//>> GET_[TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL1_PB_REQ_WO_PULSE_SLOW_SIGNAL]

//>> SET_[TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL]

//>> SET_[TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL]

//>> SET_[TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL]

//>> GET_[TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL]

//>> GET_[TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL1_PB_FORCE_SAMPLE_WO_PULSE_SLOW_SIGNAL]

//>> SET_[TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL]

//>> SET_[TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL]

//>> SET_[TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return o_data.setBit<TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL]

//>> CLEAR_[TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& CLEAR_TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return o_data.clearBit<TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL]

//>> GET_[TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL]

//>> GET_[TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL]
static inline bool GET_TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL1_PB));
#endif
    return i_data.getBit<TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL1_PB_TEST_ENABLE_WO_PULSE_SLOW_SIGNAL]

//>> PREP_[TXIRLM_REGS_TX_IMPCAL_NVAL_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_TX_IMPCAL_NVAL_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_NVAL_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_TX_IMPCAL_NVAL_PB]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_NVAL_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_TX_IMPCAL_NVAL_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_NVAL_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_TX_IMPCAL_NVAL_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_NVAL_PB]

//>> PUT_[TXIRLM_REGS_TX_IMPCAL_NVAL_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_TX_IMPCAL_NVAL_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_NVAL_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_TX_IMPCAL_NVAL_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_TX_IMPCAL_NVAL_PB]


//>> SET_[TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_NVAL_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N,
           TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_NVAL_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N,
           TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_NVAL_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N,
           TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_NVAL_PB_TX_ZCAL_N]

//>> PREP_[TXIRLM_REGS_TX_IMPCAL_SWO3_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_TX_IMPCAL_SWO3_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO3_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_TX_IMPCAL_SWO3_PB]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO3_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_TX_IMPCAL_SWO3_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_TX_IMPCAL_SWO3_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO3_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO3_PB]

//>> PUT_[TXIRLM_REGS_TX_IMPCAL_SWO3_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_TX_IMPCAL_SWO3_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO3_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_TX_IMPCAL_SWO3_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_TX_IMPCAL_SWO3_PB]


//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO3_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15,
           TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15]

//>> SET_[TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO3_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15,
           TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15]

//>> GET_[TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_TX_IMPCAL_SWO3_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15,
           TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_TX_IMPCAL_SWO3_PB_TX_ZCAL_SWO_IMP_CNTL_1R_1XN_0_15]

//>> PREP_[TXIRLM_REGS_ZCAL_FIR_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TXIRLM_REGS_ZCAL_FIR_PB(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_ZCAL_FIR_PB;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TXIRLM_REGS_ZCAL_FIR_PB]

//>> GET_[TXIRLM_REGS_ZCAL_FIR_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TXIRLM_REGS_ZCAL_FIR_PB(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TXIRLM_REGS_ZCAL_FIR_PB;
#endif
    return fapi2::getScom(i_target, TXIRLM_REGS_ZCAL_FIR_PB, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TXIRLM_REGS_ZCAL_FIR_PB]

//>> PUT_[TXIRLM_REGS_ZCAL_FIR_PB]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TXIRLM_REGS_ZCAL_FIR_PB(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_PB));
#endif
    return fapi2::putScom(i_target, TXIRLM_REGS_ZCAL_FIR_PB, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TXIRLM_REGS_ZCAL_FIR_PB]


//>> SET_[TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL,
           TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL]

//>> SET_[TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& SET_TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_PB));
#endif
    return o_data.insertFromRight<TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL,
           TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL]

//>> GET_[TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL]
static inline fapi2::buffer<uint64_t>& GET_TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TXIRLM_REGS_ZCAL_FIR_PB));
#endif
    return i_data.extractToRight<TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL,
           TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TXIRLM_REGS_ZCAL_FIR_PB_ZCAL_FIR_ERRS_RO_SIGNAL]

//>> PREP_[EPS_THERM_WSUB_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_EPS_THERM_WSUB_INJECT_REG(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_INJECT_REG;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[EPS_THERM_WSUB_INJECT_REG]

//>> GET_[EPS_THERM_WSUB_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_EPS_THERM_WSUB_INJECT_REG(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = EPS_THERM_WSUB_INJECT_REG;
#endif
    return fapi2::getScom(i_target, EPS_THERM_WSUB_INJECT_REG, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[EPS_THERM_WSUB_INJECT_REG]

//>> PUT_[EPS_THERM_WSUB_INJECT_REG]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_EPS_THERM_WSUB_INJECT_REG(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return fapi2::putScom(i_target, EPS_THERM_WSUB_INJECT_REG, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[EPS_THERM_WSUB_INJECT_REG]


//>> SET_[EPS_THERM_WSUB_INJECT_REG_TRIP]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_INJECT_REG_TRIP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_INJECT_REG_TRIP,
           EPS_THERM_WSUB_INJECT_REG_TRIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_INJECT_REG_TRIP]

//>> SET_[EPS_THERM_WSUB_INJECT_REG_TRIP]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_INJECT_REG_TRIP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_INJECT_REG_TRIP,
           EPS_THERM_WSUB_INJECT_REG_TRIP_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_INJECT_REG_TRIP]

//>> GET_[EPS_THERM_WSUB_INJECT_REG_TRIP]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_INJECT_REG_TRIP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_INJECT_REG_TRIP,
           EPS_THERM_WSUB_INJECT_REG_TRIP_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_INJECT_REG_TRIP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_INJECT_REG_TRIP]

//>> SET_[EPS_THERM_WSUB_INJECT_REG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_INJECT_REG_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_INJECT_REG_MODE,
           EPS_THERM_WSUB_INJECT_REG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access EPS_THERM_WSUB_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_INJECT_REG_MODE]

//>> SET_[EPS_THERM_WSUB_INJECT_REG_MODE]
static inline fapi2::buffer<uint64_t>& SET_EPS_THERM_WSUB_INJECT_REG_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return o_data.insertFromRight<EPS_THERM_WSUB_INJECT_REG_MODE,
           EPS_THERM_WSUB_INJECT_REG_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access EPS_THERM_WSUB_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[EPS_THERM_WSUB_INJECT_REG_MODE]

//>> GET_[EPS_THERM_WSUB_INJECT_REG_MODE]
static inline fapi2::buffer<uint64_t>& GET_EPS_THERM_WSUB_INJECT_REG_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(EPS_THERM_WSUB_INJECT_REG));
#endif
    return i_data.extractToRight<EPS_THERM_WSUB_INJECT_REG_MODE,
           EPS_THERM_WSUB_INJECT_REG_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access EPS_THERM_WSUB_INJECT_REG_MODE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[EPS_THERM_WSUB_INJECT_REG_MODE]

//>> PREP_[PCB_OPCG_GO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_PCB_OPCG_GO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PCB_OPCG_GO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[PCB_OPCG_GO]

//>> GET_[PCB_OPCG_GO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_PCB_OPCG_GO(const fapi2::Target<K, M, V>& i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = PCB_OPCG_GO;
#endif
    return fapi2::getScom(i_target, PCB_OPCG_GO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[PCB_OPCG_GO]

//>> PUT_[PCB_OPCG_GO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_PCB_OPCG_GO(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return fapi2::putScom(i_target, PCB_OPCG_GO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[PCB_OPCG_GO]


//>> SET_[PCB_OPCG_GO_PCB_OPCGGO]
static inline fapi2::buffer<uint64_t>& SET_PCB_OPCG_GO_PCB_OPCGGO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return o_data.insertFromRight<PCB_OPCG_GO_PCB_OPCGGO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access PCB_OPCG_GO_PCB_OPCGGO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PCB_OPCG_GO_PCB_OPCGGO]

//>> SET_[PCB_OPCG_GO_PCB_OPCGGO]
static inline fapi2::buffer<uint64_t>& SET_PCB_OPCG_GO_PCB_OPCGGO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return o_data.insertFromRight<PCB_OPCG_GO_PCB_OPCGGO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access PCB_OPCG_GO_PCB_OPCGGO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PCB_OPCG_GO_PCB_OPCGGO]

//>> SET_[PCB_OPCG_GO_PCB_OPCGGO]
static inline fapi2::buffer<uint64_t>& SET_PCB_OPCG_GO_PCB_OPCGGO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return o_data.setBit<PCB_OPCG_GO_PCB_OPCGGO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:scom_pauc Invalid dial access PCB_OPCG_GO_PCB_OPCGGO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[PCB_OPCG_GO_PCB_OPCGGO]

//>> CLEAR_[PCB_OPCG_GO_PCB_OPCGGO]
static inline fapi2::buffer<uint64_t>& CLEAR_PCB_OPCG_GO_PCB_OPCGGO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return o_data.clearBit<PCB_OPCG_GO_PCB_OPCGGO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:scom_pauc Invalid dial access PCB_OPCG_GO_PCB_OPCGGO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[PCB_OPCG_GO_PCB_OPCGGO]

//>> GET_[PCB_OPCG_GO_PCB_OPCGGO]
static inline fapi2::buffer<uint64_t>& GET_PCB_OPCG_GO_PCB_OPCGGO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return i_data.extractToRight<PCB_OPCG_GO_PCB_OPCGGO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access PCB_OPCG_GO_PCB_OPCGGO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PCB_OPCG_GO_PCB_OPCGGO]

//>> GET_[PCB_OPCG_GO_PCB_OPCGGO]
static inline bool GET_PCB_OPCG_GO_PCB_OPCGGO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(PCB_OPCG_GO));
#endif
    return i_data.getBit<PCB_OPCG_GO_PCB_OPCGGO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:scom_pauc Invalid dial access PCB_OPCG_GO_PCB_OPCGGO chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[PCB_OPCG_GO_PCB_OPCGGO]

//>> PREP_[TRA0_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA0_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA0_TR1_CONFIG_4]

//>> GET_[TRA0_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA0_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA0_TR1_CONFIG_4;
#endif
    return fapi2::getScom(i_target, TRA0_TR1_CONFIG_4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_4]

//>> PUT_[TRA0_TR1_CONFIG_4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA0_TR1_CONFIG_4(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_4));
#endif
    return fapi2::putScom(i_target, TRA0_TR1_CONFIG_4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA0_TR1_CONFIG_4]


//>> SET_[TRA0_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_4_A,
           TRA0_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_4_A]

//>> SET_[TRA0_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_4_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_4_A,
           TRA0_TR1_CONFIG_4_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_4_A]

//>> GET_[TRA0_TR1_CONFIG_4_A]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_4_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_4_A,
           TRA0_TR1_CONFIG_4_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_4_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_4_A]

//>> SET_[TRA0_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_4_B,
           TRA0_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA0_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_4_B]

//>> SET_[TRA0_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& SET_TRA0_TR1_CONFIG_4_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_4));
#endif
    return o_data.insertFromRight<TRA0_TR1_CONFIG_4_B,
           TRA0_TR1_CONFIG_4_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA0_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA0_TR1_CONFIG_4_B]

//>> GET_[TRA0_TR1_CONFIG_4_B]
static inline fapi2::buffer<uint64_t>& GET_TRA0_TR1_CONFIG_4_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA0_TR1_CONFIG_4));
#endif
    return i_data.extractToRight<TRA0_TR1_CONFIG_4_B,
           TRA0_TR1_CONFIG_4_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA0_TR1_CONFIG_4_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA0_TR1_CONFIG_4_B]

//>> PREP_[TRA1_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TRA1_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TRA1_TR0_CONFIG_2]

//>> GET_[TRA1_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TRA1_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TRA1_TR0_CONFIG_2;
#endif
    return fapi2::getScom(i_target, TRA1_TR0_CONFIG_2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_2]

//>> PUT_[TRA1_TR0_CONFIG_2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TRA1_TR0_CONFIG_2(const fapi2::Target<K, M, V>& i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return fapi2::putScom(i_target, TRA1_TR0_CONFIG_2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TRA1_TR0_CONFIG_2]


//>> SET_[TRA1_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_2_A,
           TRA1_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_2_A]

//>> SET_[TRA1_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_2_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_2_A,
           TRA1_TR0_CONFIG_2_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_2_A]

//>> GET_[TRA1_TR0_CONFIG_2_A]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_2_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_2_A,
           TRA1_TR0_CONFIG_2_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_CONFIG_2_A chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_2_A]

//>> SET_[TRA1_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_2_B,
           TRA1_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:scom_pauc Invalid dial access TRA1_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_2_B]

//>> SET_[TRA1_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& SET_TRA1_TR0_CONFIG_2_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return o_data.insertFromRight<TRA1_TR0_CONFIG_2_B,
           TRA1_TR0_CONFIG_2_B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:scom_pauc Invalid dial access TRA1_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TRA1_TR0_CONFIG_2_B]

//>> GET_[TRA1_TR0_CONFIG_2_B]
static inline fapi2::buffer<uint64_t>& GET_TRA1_TR0_CONFIG_2_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TRA1_TR0_CONFIG_2));
#endif
    return i_data.extractToRight<TRA1_TR0_CONFIG_2_B,
           TRA1_TR0_CONFIG_2_B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:scom_pauc Invalid dial access TRA1_TR0_CONFIG_2_B chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TRA1_TR0_CONFIG_2_B]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
