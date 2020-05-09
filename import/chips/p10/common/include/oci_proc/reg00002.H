/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: import/chips/p10/common/include/oci_proc/reg00002.H $         */
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

#ifndef __OCI_PROC_REG00002_H_
#define __OCI_PROC_REG00002_H_

#ifndef __PPE_HCODE__
namespace scomt
{
namespace oci_proc
{
#endif


//>> PREP_[TP_TPBR_PBA_PBAO_PBAXISNDTX]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PBA_PBAO_PBAXISNDTX(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBAXISNDTX;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PBA_PBAO_PBAXISNDTX]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PBA_PBAO_PBAXISNDTX(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBAXISNDTX;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PBA_PBAO_PBAXISNDTX, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX]

//>> PUT_[TP_TPBR_PBA_PBAO_PBAXISNDTX]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PBA_PBAO_PBAXISNDTX(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PBA_PBAO_PBAXISNDTX, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PBA_PBAO_PBAXISNDTX]


//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_SCOPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_QID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_TYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_RESERVATION]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_6_7]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_GROUPID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CHIPID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_RESERVED_15]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_VG_TARGE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_STOP]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXISNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT,
           TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXISNDTX_SND_CNT]

//>> PREP_[TP_TPBR_PBA_PBAO_PBAXSNDTX]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPBR_PBA_PBAO_PBAXSNDTX(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBAXSNDTX;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPBR_PBA_PBAO_PBAXSNDTX]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPBR_PBA_PBAO_PBAXSNDTX(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPBR_PBA_PBAO_PBAXSNDTX;
#endif
    return fapi2::getScom(i_target, TP_TPBR_PBA_PBAO_PBAXSNDTX, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX]

//>> PUT_[TP_TPBR_PBA_PBAO_PBAXSNDTX]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPBR_PBA_PBAO_PBAXSNDTX(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return fapi2::putScom(i_target, TP_TPBR_PBA_PBAO_PBAXSNDTX, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPBR_PBA_PBAO_PBAXSNDTX]


//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_SCOPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_QID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_TYPE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_RESERVATION]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_6_7]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_GROUPID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CHIPID]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_RESERVED_15]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_VG_TARGE]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.setBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP]

//>> CLEAR_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.clearBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP]
static inline bool GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.getBit<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_STOP]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT]

//>> SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT]
static inline fapi2::buffer<uint64_t>& SET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return o_data.insertFromRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT]

//>> GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT]
static inline fapi2::buffer<uint64_t>& GET_TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPBR_PBA_PBAO_PBAXSNDTX));
#endif
    return i_data.extractToRight<TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT,
           TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPBR_PBA_PBAO_PBAXSNDTX_SND_CNT]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6,
           TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE0_OCB_GPEXIGPR6_OCB_OCI_GPEXIVDR6_GPR6]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIGPR10_OCB_OCI_GPEXIVDRX_GPR10]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ADDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_R_NW]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BUSY]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IMPRECISE_ERROR_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_BYTE_ENABLE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_LINE_MODE]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_ERROR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIMEM_DATAOP_PENDING]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_IR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR,
           TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE1_OCB_GPEXIRAMEDR_EDR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR13_OCB_OCI_GPEXIVDRX_GPR13]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIGPR9_OCB_OCI_GPEXIVDR8_GPR9]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART1]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXISIB_PIB_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]
static inline bool GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING(
    fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_OCB_OCI_GPEXIMEM_MEM_IFETCH_PENDING]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACL_ICACHE_INFO_LOWER_PART2]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIICACU_ICACHE_INFO_UPPER]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_8]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9,
           TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE2_OCB_GPEXIVDR8_9]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIGPR2_OCB_OCI_GPEXIVDR2_GPR2]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIIR_OCB_OCI_GPEXIRAMEDR_IR]

//>> PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX]

//>> PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX]


//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_0]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3]

//>> SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3]

//>> GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3,
           TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_GPE3_OCB_GPEXIVDRX_3]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5,
           TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ADC_RDATA3_5]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_BRIDGE_ENABLE_1_B]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_2_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_CLOCK_DIVIDER_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2SCTRL11_RESERVED_14_16]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_O2S_NR_OF_FRAMES_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_RESERVED_18_19]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY,
           TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SCTRL11_SLAVE_DATA_SAMPLE_DELAY]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_O2SST2A(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SST2A;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_O2SST2A;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SST2A, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_O2SST2A(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_O2SST2A, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ONGOING_2A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4,
           TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4,
           TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4,
           TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_1_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_WRITE_WHILE_BRIDGE_BUSY_ERR_2A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6(
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6 chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_ST2A_RESERVED_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_O2SST2A));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_O2SST2A_FSM_ERR_2A]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_REGION]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE,
           TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCBLWSBR2_BASE]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_RW, TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS,
           TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OCCFLG3_OCB_OCI_OCCFLG3_OCC_FLAGS]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A,
           TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A,
           TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OIRR0A_RW, TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_CLEAR,
                           TP_TPCHIP_OCC_OCI_OCB_OIRR0A_WO_OR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A,
           TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OIRR0A_OCB_OCI_OIRR0A_INTERRUPT_ROUTE_0_A]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_ONISR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_ONISR1(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_ONISR1;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_ONISR1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ONISR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_ONISR1(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_ONISR1;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_ONISR1, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ONISR1]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_ONISR1]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_ONISR1(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ONISR1));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_ONISR1, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_ONISR1]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ONISR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1,
           TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ONISR1));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1,
           TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_ONISR1));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1,
           TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1 chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_ONISR1_INTERRUPT_NONCRIT_STATUS_1]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT0Q4_OCB_OCI_OPIT0Q4RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_RO, TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_WO_CLEAR));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3PRA_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT3Q0_OCB_OCI_OPIT3Q0RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT4Q6_OCB_OCI_OPIT4Q6RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD(
    const uint64_t i_data,
    fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD(
    fapi2::buffer<uint64_t>& i_data,
    uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD chip: %x, ec: %x",
             scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT7Q2_OCB_OCI_OPIT7Q2RR_PCB_INTR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C11(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C11;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C11(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C11;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C11, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C11(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C11));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C11, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C11));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C11));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C11));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C11_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C14RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C26;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C26;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C26, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C26, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C26RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C31RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C8;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT8C8;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C8, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT8C8, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT8C8));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT8C8_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C13RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C17;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C17;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C17, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C17, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C17));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C17_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C20(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C20;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C20(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C20;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C20, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C20(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C20));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C20, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C20));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C20));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C20));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C20));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C20));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C20));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C20_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C21RR_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C6;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPIT9C6;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C6, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPIT9C6, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_SOURCE_CORE]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPIT9C6));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD,
           TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD chip: %x, ec: %x", scomt::chip,
             scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPIT9C6_PAYLOAD]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITASV0(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITASV0;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITASV0;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITASV0, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITASV0(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITASV0, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7_LEN>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITASV0));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7,
           TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7_LEN>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITASV0_7]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO]

//>> PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PREP_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART(const fapi2::Target<K, M, V>& i_target)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART;
#endif
    return fapi2::current_err;
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PREP_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART(const fapi2::Target<K, M, V>& i_target,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    scomt::last_scom = TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART;
#endif
    return fapi2::getScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART, o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART]

//>> PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART]
template< fapi2::TargetType K, fapi2::MulticastType M, typename V >
static inline fapi2::ReturnCode PUT_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART(const fapi2::Target<K, M, V>& i_target,
        const uint64_t i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::init(i_target));
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return fapi2::putScom(i_target, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART, i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    return fapi2::current_err;
#endif
}
//<< PUT_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART]


//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_0]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_1]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_2]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_3]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_4]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_5]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_6]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7(fapi2::buffer<uint64_t>& i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("0:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7(const uint64_t i_data,
        fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.insertFromRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7,
           1>(i_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("1:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7]

//>> SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7]
static inline fapi2::buffer<uint64_t>& SET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.setBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("2:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< SET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7]

//>> CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7]
static inline fapi2::buffer<uint64_t>& CLEAR_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7(fapi2::buffer<uint64_t>& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return o_data.clearBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("3:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return o_data;
#endif
}
//<< CLEAR_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7]
static inline fapi2::buffer<uint64_t>& GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7(fapi2::buffer<uint64_t>& i_data,
        uint64_t& o_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.extractToRight<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7,
           1>(o_data);
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("4:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7]

//>> GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7]
static inline bool GET_TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7(fapi2::buffer<uint64_t>& i_data)
{
#ifdef SCOM_CHECKING
    FAPI_TRY(scomt::chkReg(TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO, TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_RO_CLRPART));
#endif
    return i_data.getBit<TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7>();
#ifdef SCOM_CHECKING
fapi_try_exit:
    FAPI_ERR("5:oci_proc Invalid dial access TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7 chip: %x, ec: %x", scomt::chip, scomt::ec);
    return i_data;
#endif
}
//<< GET_[TP_TPCHIP_OCC_OCI_OCB_OPITCPRC_7]


//>>THE END<<

#ifndef __PPE_HCODE__
}
}

#endif
#endif
