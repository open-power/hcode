/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/oci_proc/reg00017.H $         */
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

#ifndef __OCI_PROC_REG00017_H_
#define __OCI_PROC_REG00017_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> PREP_[TP_TPBR_PBA_PBAO_BCUE_SET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PBA_PBAO_BCUE_SET(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_BCUE_SET;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PBA_PBAO_BCUE_SET]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_SET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PBA_PBAO_BCUE_SET(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_BCUE_SET;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PBA_PBAO_BCUE_SET, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_SET]

//>> PUT_[TP_TPBR_PBA_PBAO_BCUE_SET]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PBA_PBAO_BCUE_SET(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_SET));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PBA_PBAO_BCUE_SET, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PBA_PBAO_BCUE_SET]


//>> SET_[TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_SET));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1,
           TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_SET));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1,
           TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_SET));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1,
           TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_SET_RESERVED_0_1]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_SET));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH,
           TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH]

//>> SET_[TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_SET));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH,
           TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH]

//>> GET_[TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_BCUE_SET));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH,
           TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_BCUE_SET_COPY_LENGTH]

//>> PREP_[TP_TPBR_PBA_PBAO_PBAMODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PBA_PBAO_PBAMODE(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBAMODE;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PBA_PBAO_PBAMODE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PBA_PBAO_PBAMODE(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBAMODE;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PBA_PBAO_PBAMODE, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE]

//>> PUT_[TP_TPBR_PBA_PBAO_PBAMODE]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PBA_PBAO_PBAMODE(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PBA_PBAO_PBAMODE, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PBA_PBAO_PBAMODE]


//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3,
           TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3,
           TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3,
           TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_0_3]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REARB]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MSTID_MATCH_PREF_INV]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_RDPIPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_SLAVE_WRPIPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_MARKER_ACK]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_9]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SECOND_WRBUF]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_REREQUEST_TO]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13,
           TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13,
           TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13,
           TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_12_13]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15,
           TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15,
           TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15,
           TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_14_15]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION,
           TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION,
           TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION,
           TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_PBA_REGION]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE,
           TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE,
           TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE,
           TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_OCI_MARKER_SPACE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS,
           TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS,
           TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS,
           TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_BCDE_OCITRANS]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS,
           TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS,
           TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS,
           TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_BCUE_OCITRANS]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_RD_PIPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DIS_MASTER_WR_PIPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_SLV_FAIRNESS]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_EN_EVENT_COUNT]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_29]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX,
           TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX,
           TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX,
           TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_SLV_EVENT_MUX]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_ENABLE_DEBUG_BUS]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_PB_NOT_OCI]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE,
           TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE,
           TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE,
           TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_DEBUG_OCI_MODE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_39]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK,
           TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK,
           TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK,
           TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_FAIRNESS_MASK]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV,
           TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV,
           TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV,
           TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_OCISLV_REREQ_HANG_DIV]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63,
           TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63]

//>> SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63,
           TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63]

//>> GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAMODE));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63,
           TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAMODE_RESERVED_50_63]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIICACU_ICACHE_INFO_UPPER]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEIVPR_OCB_OCI_GPEIVPR_IVPR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_LOW_PRIORITY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_MEM_HIGH_PRIORITY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_LOW_PRIORITY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_LOCAL_HIGH_PRIORITY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_LOW_PRIORITY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_SRAM_HIGH_PRIORITY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEMACR_WRITE_PROTECT_ENABLE]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA1_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SRD1B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_O2SRD1B(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SRD1B;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SRD1B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD1B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_O2SRD1B(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SRD1B;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SRD1B, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD1B]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SRD1B]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_O2SRD1B(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SRD1B));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SRD1B, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SRD1B]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SRD1B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B,
           TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SRD1B));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B,
           TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SRD1B));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B,
           TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SRD1B_OCB_OCI_O2SRD1B_O2S_RDATA_1B]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_REGION]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR0_BASE]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG1_OCB_OCI_OCCFLG1_OCC_FLAGS]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C,
           TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C,
           TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0C_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0C_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C,
           TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0C_OCB_OCI_OIRR0C_INTERRUPT_ROUTE_0_C]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITASV2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITASV2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITASV2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITASV2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITASV2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITASV2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV2_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OTR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OTR0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OTR0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OTR0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OTR0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OTR0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OTR0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OTR0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OTR0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OTR0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OTR0]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMEOUT_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_CONTROL_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_AUTO_RELOAD_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0,
           TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0,
           TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0,
           TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_SPARE_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0,
           TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0,
           TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OTR0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0,
           TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OTR0_TIMER_0]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_P2S_100NS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_P2S_100NS(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_P2S_100NS;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_P2S_100NS]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_100NS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_P2S_100NS(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_P2S_100NS;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_P2S_100NS, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_100NS]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_P2S_100NS]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_P2S_100NS(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_100NS));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_P2S_100NS, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_P2S_100NS]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_100NS));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS,
           TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_100NS));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS,
           TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_100NS));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS,
           TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_100NS_OCB_OCI_P2S_100NS]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_P2S_CMD(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_P2S_CMD;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CMD(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_P2S_CMD;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_P2S_CMD, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_P2S_CMD(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CMD));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_P2S_CMD, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CMD));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CMD));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CMD));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CMD));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CMD));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_P2S_CMD));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_P2S_CMD_OCB_OCI_P2S_CMD_START_COMMAND]

//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
