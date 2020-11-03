/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/ppe_proc/reg00008_unused.H $  */
/*                                                                        */
/* OpenPOWER EKB Project                                                  */
/*                                                                        */
/* COPYRIGHT 2020                                                         */
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

#ifndef __PPE_PROC_REG00008_H_UNUSED__
#define __PPE_PROC_REG00008_H_UNUSED__

#ifndef __PPE_HCODE__
namespace scomt
{
namespace ppe_proc
{
#endif


//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2,
                           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2,
                           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2,
                           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2,
                           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH,
           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2,
                           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH,
           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2,
                           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH,
           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH]


//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2,
                           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2(const fapi2::Target<K, M, V>&
        i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2(const fapi2::Target<K, M, V>&
        i_target, fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2(const fapi2::Target<K, M, V>&
        i_target, const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2,
                           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2]

//>> PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW]

//>> PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2,
                           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW]


//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2,
                           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH,
           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH]

//>> SET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2,
                           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW));
#endif
    return o_data.insertFromRight<TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH,
           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH]

//>> GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE1, TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_PPE2,
                           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_RW));
#endif
    return i_data.extractToRight<TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH,
           TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:ppe_proc Invalid dial access TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_PIB_SBE_SBEPRV_LCL_LFR_SCRATCH_SBE_LCL_LFR_SCRATCH]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
