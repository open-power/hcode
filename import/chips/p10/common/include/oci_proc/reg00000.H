/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/oci_proc/reg00000.H $         */
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

#ifndef __OCI_PROC_REG00000_H_
#define __OCI_PROC_REG00000_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> PREP_[TP_TPBR_PBA_PBAO_PBASLVCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PBA_PBAO_PBASLVCTL1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBASLVCTL1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PBA_PBAO_PBASLVCTL1]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PBA_PBAO_PBASLVCTL1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBASLVCTL1;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PBA_PBAO_PBASLVCTL1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1]

//>> PUT_[TP_TPBR_PBA_PBAO_PBASLVCTL1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PBA_PBAO_PBASLVCTL1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PBA_PBAO_PBASLVCTL1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PBA_PBAO_PBASLVCTL1]


//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_ENABLE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_MATCH_VALUE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_4]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_MID_CARE_MASK]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TTYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_11_14]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_TTYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_READ_PREFETCH_CTL]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_INVALIDATE_CTL]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_W]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_A]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_B]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_BUF_ALLOC_C]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_23]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_DIS_WRITE_GATHER]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WR_GATHER_TIMEOUT]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_WRITE_TSIZE]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR,
           TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_EXTADDR]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50]

//>> SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50]

//>> GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50]
static inline bool GET_TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBASLVCTL1));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBASLVCTL1_RESERVED_50]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_POPULATE_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACL_VALID]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIDCACU_OCB_OCI_GPEXIDCAC_DCACHE_TAG_ADDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_WATCHDOG_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPETSEL_FIT_SEL]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_FRAME_SIZE_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_OUT_COUNT1_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_DELAY1_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRLF1_IN_COUNT1_1]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCBSES2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBSES2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCBSES2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBSES2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBSES2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCBSES2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBSES2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_SH_READ_UNDERFLOW]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBSES2));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBSES2_LL_WRITE_OVERFLOW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW, TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW, TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW, TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW, TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1,
           TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW, TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1,
           TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIEPR1_RW, TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIEPR1_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1,
           TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIEPR1_OCB_OCI_OIEPR1_INTERRUPT_EDGE_POL_1]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW, TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW, TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW, TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW, TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1,
           TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW, TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1,
           TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIMR1_RW, TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIMR1_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1,
           TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIMR1_OCB_OCI_OIMR1_INTERRUPT_MASK_1]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OINKR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OINKR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OINKR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OINKR1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OINKR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OINKR1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OINKR1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OINKR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OINKR1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OINKR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OINKR1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OINKR1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OINKR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OINKR1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OINKR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1,
           TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OINKR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1,
           TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OINKR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1,
           TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OINKR1_OCB_OCI_OINKR1_INTERRUPT_INPUT_1]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A,
           TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A,
           TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR1A_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR1A_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A,
           TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR1A_OCB_OCI_OIRR1A_INTERRUPT_ROUTE_1_A]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_P2S_CR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_P2S_CR1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_P2S_CR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_P2S_CR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_BRIDGE_ENABLE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_DEVICE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPOL]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CPHA]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER,
           TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER,
           TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER,
           TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CLOCK_DIVIDER]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2,
           TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2,
           TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2,
           TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_CR1_RESERVED_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CR1));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CR1_NR_OF_FRAMES]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_P2S_STAT;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_P2S_STAT;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_P2S_STAT, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_P2S_STAT, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_ONGOING]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4,
           TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4,
           TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4,
           TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_1_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_WRITE_WHILE_BRIDGE_BUSY_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_RESERVED_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_STAT));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_STAT_P2S_FSM_ERR]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
